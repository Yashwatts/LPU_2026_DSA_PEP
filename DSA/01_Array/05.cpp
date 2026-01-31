// Time Complexity - How much time an algorithm takes as input size increases

// Big O -> represents the upper bound of running time, it gives the worst-case scenario for an algorithm. It describes the maximum time an algorithm can take.

/*

1. O(1) - Constant time -> the time taken doesn't depend on the input size, the algorithm always runs in the same time.

cout << "Hello";
for(int i=0; i<10; i++){
}

2. O(log n) -> Logarithmic time -> time grows logarithmically as the input size increases, often seen in algos that divide the input in half, like binary search

3. O(n) -> Linear Time -> the time grows directly proportional to input size
for(int i=0; i<n; i++){
}

4. O(n log n) -> Linearithmic time
a mix of linear and logarithmic, quick and merge sort

5. O(n^2) -> Quadratic time -> time grows proportionally to the square of input size

*/