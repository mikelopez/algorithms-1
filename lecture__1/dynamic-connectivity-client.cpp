/* 
 * Dynamic connectivity client
 * - Reads the number of objects N from stdin
 * - Repeats:
 *      - reads in pair of integers from stdin
 *      - if they are not yet connected, connect them and print out pair
 *
 *
 *        ________________________________
 *        |   0  |   1  |  2  |  3  |  4  |
 *        |______|______|_____|_____|_____|
 *  id[]  |   0  |   1  |  2  |  3  |  4  |
 *        |______|______|_____|_____|_____|
 */

#include <iostream>
using namespace std;

// Quickfind class
class QuickFindUF {
    int id[4];
    public:
        QuickFindUF(int);
        void custom_union(int, int);
        bool connected(int, int);
};

QuickFindUF::QuickFindUF(int N) {
    /* Constructor sets each object to itself
     *      0 1 2 3 4
     * id[] 0 1 2 3 4
    */
    for (int i = 0; i < N; i++) {
        id[i] = i;
    }
}


bool QuickFindUF::connected(int p, int q) {
    // Check whether p and q are in same component
    // 2 array accesses
    return id[p] == id[q];
};

void QuickFindUF::custom_union(int p, int q) {
    int pid = id[p];
    int qid = id[q];
    for (int i = 0; i < sizeof(id); i++) {
        if (id[i] == pid) {
            id[i] = qid;
        }
    }
};




int main ()
{
    int N;
    cout << "Enter a number: ";
    cin >> N; 
    cout << "You entered " << N << endl;
    return 0;

 }
