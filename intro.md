# About desing of algorithms

The term **algorithm** describe a problem-solving method that can be implemented as a computer program.
 During the development of an algorithm, it is often necessary to employ methods for storing and organizing the data involved in the computation. The objects created for this purpose are called **data structures**. It is beneficial to identify the **fundamental operations** that will be performed on the data structure deemed useful in solving our problem. Both data structures and fundamental operations are essential for providing a suitable solution in terms of time complexity and memory space. So the general road map during the 
 development of an **efficient** algorithms is: 
 * Develop a simple algorithm to solve the identified problem. 
 * Determine the most suitable data structures for storing and organizing the problem data. 
 * Identify the key operations that the algorithm will perform on the data structures. 

## A sample poblem: Connectivity of points:
Given a sequence of pairs of integers representing connections between objects (in the form a-b), the task of a connectivity algorithm 
is to output those pairs that provide new  connections. For example, in the intput
3-4 
4-9 
8-0 
2-3 
5-6 
2-9 
5-9 
7-3 
4-8 
5-6 
0-2 
6-1 

pair 2-9 is not part of the output because the connection 2-3-4-9 is implied by previous connections, the same for 0-2 pair since we have
as evidence 0-8-4-3-2. 

### Find-and-Join algorithms
At first, we could store all the pairs and then pass through them checkoing if the next pair of points is connected. But there is an alternative that allows us to avoid storing all the input in memory before checking each pair. We can add each point to a set with the property that all points in that set are connected, so in the next search if a point is already in a set, the partner is joined to the set, otherwise the pair forms a new set of only two elements. The find-and-join can be implemented using just array data structure, the function `quick_find` implements the **Quick Find** algorithm to solve the connectivity problem.