
C++ Sample Quick Union - Lazy Approach

An array of ``N`` elements will represent "roots" of trees.
Each entry of the array will contain the reference to its parent root ID


.. code-block::

             0       1       2       3       4       5       6       7  
  id[]   |   0   |   1   |   2   |   3   |   4   |   5   |   6   |   7   |


Find: Checks if ``p`` and ``q`` have the same root value

Union: To merge components containing p and q, set the id of p's root to 
the id of q's
