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
