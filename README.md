# Mastering Data Structure
![](/image/D.png)
## About Data Strcture:

A data structure is a specialized format for organizing, processing, retrieving and storing data. While there are several basic and advanced structure types, any data structure is designed to arrange data to suit a specific purpose so that it can be accessed and worked with in appropriate ways.

In computer programming, a data structure may be selected or designed to store data for the purpose of working on it with various algorithms. Each data structure contains information about the data values, relationships between the data and functions that can be applied to the data.

### Characteristics of data structures:

Data structures are often classified by their characteristics. Possible characteristics are:
<ul>
<li>Linear or non-linear: This characteristic describes whether the data items are arranged in chronological sequence, such as with an array, or in an unordered sequence, such as with a graph.</li>
<li>Homogeneous or non-homogeneous: This characteristic describes whether all data items in a given repository are of the same type or of various types.</li>
<li>Static or dynamic: This characteristic describes how the data structures are compiled. Static data structures have fixed sizes, structures and memory locations at compile time. Dynamic data structures have sizes, structures and memory locations that can shrink or expand depending on the use.</li>
</ul>

### Data Structure Hierarchy

![](/image/h.png)

## Time Complexity and Space Complexity:-

Sometimes, there are more than one way to solve a problem. We need to learn how to compare the performance different algorithms and choose the best one to solve a particular problem. While analyzing an algorithm, we mostly consider time complexity and space complexity. Time complexity of an algorithm quantifies the amount of time taken by an algorithm to run as a function of the length of the input. Similarly, Space complexity of an algorithm quantifies the amount of space or memory taken by an algorithm to run as a function of the length of the input.

Time and space complexity depends on lots of things like hardware, operating system, processors, etc. However, we don't consider any of these factors while analyzing the algorithm. We will only consider the execution time of an algorithm.

Order of growth is how the time of execution depends on the length of the input.  Order of growth will help us to compute the running time with ease. We will ignore the lower order terms, since the lower order terms are relatively insignificant for large input. We use different notation to describe limiting behavior of a function.

## Asymptotic Analysis:-

Is the big idea that handles above issues in analyzing algorithms. In Asymptotic Analysis, we evaluate the performance of an algorithm in terms of input size (we don’t measure the actual running time). We calculate, how the time (or space) taken by an algorithm increases with the input size.

Lets Take A example:-

For example, let us consider the search problem (searching a given item) in a sorted array. One way to search is Linear Search (order of growth is linear) and the other way is Binary Search (order of growth is logarithmic). To understand how Asymptotic Analysis solves the above mentioned problems in analyzing algorithms, let us say we run the Linear Search on a fast computer A and Binary Search on a slow computer B and we pick the constant values for the two computers so that it tells us exactly how long it takes for the given machine to perform the search in seconds. Let’s say the constant for A is 0.2 and the constant for B is 1000 which means that A is 5000 times more powerful than B. For small values of input array size n, the fast computer may take less time. But, after a certain value of input array size, the Binary Search will definitely start taking less time compared to the Linear Search even though the Binary Search is being run on a slow machine. The reason is the order of growth of Binary Search with respect to input size is logarithmic while the order of growth of Linear Search is linear. So the machine dependent constants can always be ignored after a certain value of input size.
Here are some running times for this example:

Linear Search running time in seconds on A: 0.2 * n

Binary Search running time in seconds on B: 1000*log(n)


 n      | Running time on A | Running time on B 
--------|------------------|-------------------
 10     |   2 sec           | ~ 1 h             
 100    |    20 sec         | ~ 1.8 h           
 10^6   |   ~ 55.5 h        | ~ 5.5 h           
10^9    |   ~ 6.3 years     |  ~ 8.3 h           



### 1) Θ Notation:-

The theta notation bounds a functions from above and below, so it defines exact asymptotic behavior.
A simple way to get Theta notation of an expression is to drop low order terms and ignore leading constants. For example, consider the following expression.
3n3 + 6n2 + 6000 = Θ(n3)
Dropping lower order terms is always fine because there will always be a n0 after which Θ(n3) has higher values than Θn2) irrespective of the constants involved.

For a given function g(n), we denote Θ(g(n)) is following set of functions.

Θ(g(n)) = {f(n): there exist positive constants c1, c2 and n0 such 
                 that 0 <= c1*g(n) <= f(n) <= c2*g(n) for all n >= n0}
                 
The above definition means, if f(n) is theta of g(n), then the value f(n) is always between c1*g(n) and c2*g(n) for large values of n (n >= n0). The definition of theta also requires that f(n) must be non-negative for values of n greater than n0.

               Θ Notation Also Known as Average Case of Algorithm.

 ### 2) Big O Notation:-
 
 The Big O notation defines an upper bound of an algorithm, it bounds a function only from above. For example, consider the case of Insertion Sort. It takes linear time in best case and quadratic time in worst case. We can safely say that the time complexity of Insertion sort is O(n^2). Note that O(n^2) also covers linear time.
If we use Θ notation to represent time complexity of Insertion sort, we have to use two statements for best and worst cases:
1. The worst case time complexity of Insertion Sort is Θ(n^2).
2. The best case time complexity of Insertion Sort is Θ(n).

The Big O notation is useful when we only have upper bound on time complexity of an algorithm. Many times we easily find an upper bound by simply looking at the algorithm.

O(g(n)) = { f(n): there exist positive constants c and 
                  n0 such that 0 <= f(n) <= c*g(n) for 
                  all n >= n0}
                  
               Big O Notation  Also Known as Wrost Case Of Algorithm.


###  3) Ω Notation:-

Just as Big O notation provides an asymptotic upper bound on a function, Ω notation provides an asymptotic lower bound.

Ω Notation can be useful when we have lower bound on time complexity of an algorithm. As discussed in the previous post, the best case performance of an algorithm is generally not useful, the Omega notation is the least used notation among all three.

For a given function g(n), we denote by Ω(g(n)) the set of functions.

Ω (g(n)) = {f(n): there exist positive constants c and
                  n0 such that 0 <= c*g(n) <= f(n) for
                  all n >= n0}.
                  
Let us consider the same Insertion sort example here. The time complexity of Insertion Sort can be written as Ω(n), but it is not a very useful information about insertion sort, as we are generally interested in worst case and sometimes in average case.

              Ω Notation Also Known as best Case of Algorithm.

 ### To Learn  Analysis Of Algorithm You can refer this :-

[Analysis of Loops](https://www.geeksforgeeks.org/analysis-of-algorithms-set-4-analysis-of-loops/)

[Time Complexiy Analysis Video Lecture From mycodeschool](https://www.youtube.com/playlist?list=PL2_aWCzGMAwI9HK8YPVBjElbLbI3ufctn)

[Time Complexiy Analysis Video Lecture From Prateek Jain - Impetus](https://www.youtube.com/watch?v=eDNXKJRdunk)

# Data Structure

## Array:-

#### Introduction to Arrays
An array is collection of items stored at contiguous memory locations. The idea is to store multiple items of same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array).

For simplicity, we can think of an array a fleet of stairs where on each step is placed a value (let’s say one of your friends). Here, you can identify the location of any of your friends by simply knowing the count of the step they are on.

Remember: “Location of next index depends on the data type we use”.

#### Advantages of using arrays in c/c++:
<ul>
 <li>Arrays allow random access of elements. This makes accessing elements by position faster.</li>
 <li>Arrays have better cache locality that can make a pretty big difference in performance.</li>
 <li>Use of less line of code as it creates a single array of multiple elements.</li>
 <li>Traversal through the array becomes easy using a single loop.</li>
 <li>Sorting becomes easy as it can be accomplished by writing less line of code.</li>
</ul>

#### Disadvantages of an Array in C/C++:
<ul>
<li>Allows a fixed number of elements to be entered which is decided at the time of declaration. Unlike a linked list, an array in C is not dynamic.</li>
<li>Insertion and deletion of elements can be costly since the elements are needed to be managed in accordance with the new memory allocation.</li>
</ul>

### Linear Search 
![](/image/LS.png)
Linear search is used on a collections of items. It relies on the technique of traversing a list from start to end by exploring properties of all the elements that are found on the way.

For example, consider an array of integers of size . You should find and print the position of all the elements with value . Here, the linear search is based on the idea of matching each element from the beginning of the list to the end of the list with the integer , and then printing the position of the element if the condition is True.

Implementation:

The pseudo code for this example is as follows :

                     for(start to end of array)
                     {
                           if (current_element equals to 5)  
                        {
                                  print (current_index);
                                }
                              }
The time complexity of Llinear Search algorithm is O(n) because each element in an array is compared only once.

Linear search is rarely used practically because other search algorithms such as the binary search algorithm and hash tables allow significantly faster searching comparison to Linear search.

# Binary search

Binary search is the most popular Search algorithm.It is efficient and also one of the most commonly used techniques that is used to solve problems.

If all the names in the world are written down together in order and you want to search for the position of a specific name, binary search will accomplish this in a maximum of  iterations.

Binary search works only on a sorted set of elements. To use binary search on a collection, the collection must first be sorted.

When binary search is used to perform operations on a sorted set, the number of iterations can always be reduced on the basis of the value that is being searched.

![](/image/bs.png)

# Jump Search 

Like Binary Search, Jump Search is a searching algorithm for sorted arrays. The basic idea is to check fewer elements (than linear search) by jumping ahead by fixed steps or skipping some elements in place of searching all elements.

Time Complexity : O(√n)

Auxiliary Space : O(1)

### Important points:
<ul>
 <li>Works only sorted arrays.</li>
<li>The optimal size of a block to be jumped is (√ n). This makes the time complexity of Jump Search O(√ n).</li>
<li>The time complexity of Jump Search is between Linear Search ( ( O(n) ) and Binary Search ( O (Log n) ).</li>
<li>Binary Search is better than Jump Search, but Jump search has an advantage that we traverse back only once (Binary Search may require up to O(Log n) jumps, consider a situation where the element to be searched is the smallest element or smaller than the smallest). So in a system where binary search is costly, we use Jump Search.</li>
 </ul>
 
![](/image/js.png)

# Selection Sort 
