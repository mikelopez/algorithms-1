#include <iostream>
using namespace std;

const int N = 10;

class QuickUnion {
    int id[N];
    private:
        int root(int i);
    public:
        QuickUnion();
        void custom_union(int, int);
        bool connected(int, int);
        int* get_id() { return id; }
};

QuickUnion::QuickUnion() {
    // Set the array values to its index i
    for (int i = 0; i < N; i++) {
        id[i] =  i;
    }
};


int QuickUnion::root(int i) {
    while (i != id[i]) {
        i = id[i];
    }
    return i;
};

void QuickUnion::custom_union(int p, int q) {
    int i = root(p);
    int j = root(q);
    id[i] = j;
};

bool QuickUnion::connected(int p, int q) {
    // check if p and q have the same root
    // (depth of p and q array accesses)
   return root(p) == root(q);
};

void print_ids(int id[N]) {
    for (int i = 0; i < N; i++) {
        cout << i << "\t" << id[i] << endl;
    }
};

int main() {
    QuickUnion qu;
    int *p;
    p = qu.get_id();
    cout << "Initial Array" << endl;
    print_ids(p);

    return 0;
}
