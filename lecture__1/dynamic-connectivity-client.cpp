/* 
 * Dynamic connectivity client
 * - Reads the number of objects N from stdin
 * - Repeats:
 *      - reads in pair of integers from stdin
 *      - if they are not yet connected, connect them and print out pair
 */

 #include <iostream>
 using namespace std;

int main ()
{
    int N;
    cout << "Enter a number";
    cin >> N; 
    cout << "You entered " << N << endl;
    return 0;

 }
