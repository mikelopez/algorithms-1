#include <iostream>
#include "../../common-src/timeit.h"
using namespace std;

/* Demonstrating a binary search */

const int N = 1024;
const int firsthalf = (N / 2);

void build_array(int *id);
int binary_search(int *id, int *search_for, int *result);

int main() {
    int id[N];
    int value;
    int result;
    timer t1, t2;

    build_array(id);
    cout << "Enter a value to search for between " << id[0] << " and ";
    cout << id[(N-1)] << " " << endl;
    cin >> value;
    cout << "Searching..." << endl;

    // perform the binary search
    t1 = run_timer(t1);
    result = binary_search(id, &value, &result);
    t2 = run_timer(t2);
    print_time_diff(t1, t2);
}


void build_array(int *id) {
    for (int i = 0; i < N; i++) {
        id[i] = (i * 10) + i;
    }
}

int binary_search(int *id, int *search_for, int *result) {
    // Binary search algorithm
    cout << "exec binary search" << endl;
    *result = 420;
}

