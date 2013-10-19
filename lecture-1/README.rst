Sample in C++ Illustrating Dynamic Connectivity


Performs a quick union by first creating an array with ``N`` elements with the value
of the index number (x[0] = 0, x[1] = 1...etc)


Union(x, y) will replace the value of array[x] with the value of array[y]


.. code-block:: 
    int id[N]
    for (int i = 0; i < id.size(); i++) {
        id[i] = i;
    }
    print id
     _____________________________
    |  0  |  1  |  2  |  3  |  4  |
    |-----|-----|-----|-----|-----|
    |  0  |  1  |  2  |  3  |  4  |
     -----------------------------

    union(2, 4)
     _____________________________
    |  0  |  1  |  2  |  3  |  4  |
    |-----|-----|-----|-----|-----|
    |  0  |  1  |  4  |  3  |  4  |
     -----------------------------

    union(2, 1)
     _____________________________
    |  0  |  1  |  2  |  3  |  4  |
    |-----|-----|-----|-----|-----|
    |  0  |  1  |  1  |  3  |  1  |
     -----------------------------

    union(0, 3)
     _____________________________
    |  0  |  1  |  2  |  3  |  4  |
    |-----|-----|-----|-----|-----|
    |  3  |  1  |  1  |  3  |  1  |
     -----------------------------



