# Array:-

#### Introduction to Arrays
An array is collection of items stored at contiguous memory locations. The idea is to store multiple items of same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array).

For simplicity, we can think of an array a fleet of stairs where on each step is placed a value (let’s say one of your friends). Here, you can identify the location of any of your friends by simply knowing the count of the step they are on.

Remember: “Location of next index depends on the data type we use”.


![](/image/mr.png)

The above image can be looked as a top-level view of a staircase where you are at the base of staircase. Each element can be uniquely identified by their index in the array (in a similar way as you could identify your friends by the step on which they were on in the above example).

## Types of indexing in array:

<ul>
 
<li> 0 (zero-based indexing): The first element of the array is indexed by subscript of 0 </li>
<li> 1 (one-based indexing): The second element of the array is indexed by subscript of 1 </li>
<li> n (n-based indexing): The base index of an array can be freely chosen. Usually programming languages allowing n-based indexing also allow negative index values and other scalar data types like enumerations, or characters may be used as an array index. </li>
</ul>

![](/image/mr2.png)

### Advantages of using arrays in c/c++:
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

## Basic Operations

Following are the basic operations supported by an array.
<ul>
 <li>Traverse − print all the array elements one by one.</li>
 <li>Insertion − Adds an element at the given index.</li>
 <li>Deletion − Deletes an element at the given index.</li>
 <li>Update − Updates an element at the given index.</li>
</ul>

### Traverse Operation

This operation is to traverse through the elements of an array.

### Insertion Operation

Insert operation is to insert one or more data elements into an array. Based on the requirement, a new element can be added at the beginning, end, or any given index of array.

### Deletion Operation

Deletion refers to removing an existing element from the array and re-organizing all elements of an array.

### Update Operation

Update operation refers to updating an existing element from the array at a given index.
