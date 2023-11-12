 # Data Structure and Algorithm

### Data Type
1. Defines a certain **domain** of values
2. Defines **Operations** allowed on those values
    - Example: Allowed Operations on floating point values are addition, subtraction, multiplication, division, etc. Bitwise and % operations are not allowed.

Include: 
* Primitive data types - integers, char, etc..
* user defined data types - Structure, union and enumeration.

### Abstract Data Types
They are simillar to `user defined data` types which defines operations on values using functions without specifying what is there inside the function and how the operations are performed (ABSTRACTION). <br>

**Example**
    Stack - Consists of elements of same type arranged in a sequential order

**Operations:**
* initialize()
* Push()
* Pop()
* isEmpty()
* isFull()

**NOTE:** There are multiple ways to implement an Abstract Data Type (ADT)<br>
    Example: A stack ADT can be implemented using `arays` or `linked lists`.

**Why use adt?**<br>
The program with uses data structure is called a `client` program. <br>
The `client` has access to the ADT, i.e. interfece. <br>
The program which implements the data structure is known as the `implementation`.

- The user can use the Operations without knowing its implementation
- The client program will work the same without being affected when an implementation is changed.

_______________________________

**Data structures** is the programmatic/system way of storing/organizing data so that data can be used efficiently.
Algorithm is a step-by-step procedure, which defines a set of instructions to be executed in a certain order to get the desired output.<br>
A `data structure` is used to implement an `Abstract Data Type`

`ADT` tells us **what** ***(BLUEPRINT)***is to be done and `data structures` tells us **how** ***(IMPLEMENTATION)*** to do it.<br>
Different implementations of ADT are compared for time and space efficiency. The one best suited according to the current requirement wof the user will be selected.<br>

**Advantages of Data Structure**
* Efficiency - Proper choice of data strcutures make program efficient in terms of space and time
* Reusability - One implementation can be used by multiple client programs
* Abstraction - Data structure is specified by an ADT which provides a level of abstraction. The client program doesn't have to worry about the implementation details.


#### Types of Data Structure
* **Linear Data Structures** - 
    All elements are arranged in a linear (sequential) order

* **Non-Linear Data Structures**
    All elements are not arranged in a linear (sequantial) order. There is no linear arrangements of the elements. Example: Tree, Graph

- **Static Data Structures**
    Memory is allocated at compile time. Maximum size is fixed. Example: Array<br>
    ***Advantages***: Fast access. <br>
    ***Disadvantages***: Slower insertion and deletion.

- **Dynamic Data Strcuture**
    Memory is allocated at run time. Maximum size is flexible. Example: Linked List <br>
    ***Advantages***: Faster insertion and deletion
    ***Disadvantages***: Slower access

#### Asymptotic Analysis.
Efficiency of data structures is always measures in terms of **TIME** and **SPACE**<br>

We compare the time complexity of the data structure on the basis of operations performed on them.<br>
**Example:** Inserting an element at the beginning of the list is way faster in the `linked list` than `arrays`.

**NOTE**
- Measuring the actual running time is not practical at all
- The running time generally depends on the **size of the input** <br>
Therefore, if the size of the input is n, then f(n) is a funciton of n denotes the `time complexity`. In other words, f(n) represents the number of instructions for the input value n.<br>
We can compare two data structures for a particular operation by comparing their f(n) values. We are interested in growth rate of f(n) with respect to n because it might be possible that for smaller input size, one data strcuture may seem better than the other but for larger input size it may not.<br>
This concept is application in caomparing the two algorithms as well.

**Example**<br>

> f(n) = 5n<sup>2</sup> + 6n + 12

| | | | |
|-|-|-|-|
|n|5n<sup>2</sup>|6n|12|
|1|21.74%|26.09%|52.17%|
|10|87.41%|10.49%|2.09%|
|100|98.79%|1.19%|0.02%|
|1000|99.88%|0.12%|0.0002%|
| | | | |

![](/images/f(n).png)

It is a clear observation that for larger values of n, the squared term consumes almost 99% of the time, so there is no harm if we can eliminate the rest of the terms as they are not contributing much of the time.<br>
**Hence:**
> f(n) = 5n<sup>2</sup>

We are getting the approximate time complexity and we are satisfies with the results because this approximate result is very near to the actual result. <br>
This approximate measure of time complexity is called **Asymptotic Complexity**


____________________________________

**Categories of algorithm**
- Search
- Sort
- Insert
- Update
- Delete

Following computer problems can be solved using Data Structures
- Fibonaccui number series
- Knapsack problem
- Tower of Hanoi
- All pair shortest path by Floyd-Warshall
- Shortest path by Dijkstra
- Project scheduling


Foundation terms of a data structure
- Interface: A set of operations that a data structure supports.
    - Provider the list of supported operations
    - Type of parameters they can accept
    - Return type of these operations
- Implementation: 
    - Provides the internal representation of a data structure
    - Provides the definition of the algorithms used in the oprerations of the data structure.

Characteristics of a data structure
- Correctness: Implementation
- Time complexity: Execution time 
    - Worse Case
    - Avergae case
    - Best case
- Space complexity: Memory usage


Basic Terminology
- Data: Values or set of values
- Data Item: Single unit of values
- Group Items: Data items that are divided into sub items
- Elementary Items: Data items that cannot be divided
- Attribute and entity: That which contains certain properties, which may be assigned values.
- Entity Set: Entities of similar properties
- Field: A single elementary unit of information representing an attribute of an entity.
- Record: A collection of field values of a given entity.
- File: A collection of records of the entities in a given entity.



#### Data Definition
This defines a particular data with the following characteristics.

* **Atomic** - Definition should define a single concept.
* **Traceable** - Definitions should be able to be mapped to some dta element.
* **Accurate** - Definition should be unambiguos.
* **Clear and Concise** - Definition shpuld be understandable.

#### Data Object
This represents an object having a data

#### Data Type
This is a way to classify various types of data such as interger string, etc. which determines the values that can be used with the corresponding type of data, and the type of operations that can be performed on the corresponding type of data.
 
* Built-in Data Type

    These are data types for which a language has built-in support for. 
    - Intergers
    - Boolean
    - Floating (Decimal numbers)
    - Character and Strings


* Derived Data Type

    Those data types which are implementation independent as they can be implemented in one or the other way.<br>
    These data types are normally built by the combination of primary or built-in data types and associated operations on them
    - List
    - Array
    - Stack
    - Queue


#### Basic Operations
The data in the data structures are processed by certain operations. The particular data structure chosen largely depends on the frequency of the operation that needs to be performed on the data structure.

* Traversing
* Searching
* Insertion
* Deletion
* Sorting
* Merging

____________________

## Data Structures and Types

Data types represent the nature of the data while data structures are just a collection of similar or different data types in one.

![](/images/data_structures_and_types.jpeg)

There are usually just two types of data structures
- Linear Data Structures
- Non-Linear Data Structures

<br>

### Linear Data Structures
The data is stored in linear data structures sequentially. These are rudimentary structures since the elements are stored one after the other without applying any mathematical operations.

![](/images/linear_data_structures.jpeg)

Linear data structures are usually easy to implement but since the memory allocation might become complicated, time and space complexities increase.
    
Examples Include:
* Arrays
* Linked Lists
* Stacks
* Queues

***Sub-types***
- Static Linear Data Structures
     <br>
    In Static Linear Data Structures, the memory allocation is not scalable. 
    - Example includes an array
<br>

- Dynamic Linear Data Structures
    <br>
    In Dynamic linear data structures, the memory allocation can be done dynamically when required.
    - Examples include: linked lists, stacks and queues.

<br>

### Non-Linear Data Structures
Non-Linear data structures store the data in the form of a hierarchy. <br>
The data can be found in multiple levels and are difficult to traverse through.

![](/images/non_linear_data_structures.jpeg)

Few types of non-linear data structures are
- Graphs
- Trees
- Tries
- Maps

<hr>

# Arrays
Array is a type of linear data structure that is defined as a collection of elements with same or different data types.<br>
They exist in both single dimension and multiple dimensions.

![](/images/arrays1.jpeg)

- Element − Each item stored in an array is called an element.
- Index − Each location of an element in an array has a numerical index, which is used to identify the element.

**Syntax**
```
data_type array_name[array_size] = {elements separated using commas}
or,
data_type array_name[array_size];
```

### Need for Arrays
Arrays are used as solutions to many problems from the small sorting problems to more complex problems like travelling salesperson problem. <br>

Arrays provide O(1) random access lookup time. That means, accessing the 1st index of the array and the 1000th index of the array will both take the same time.
This is due to the fact that array comes with a pointer and an offset value. The pointer points to the right location of the memory and the offset value shows how far to look in the said memory.

```
  array_name[index]
     |         |
  Pointer    Offset
```

### Array Representation
Arrays are represented as a collection of buckets where each bucket stores one element.
These buckets are indexed from ‘0’ to ‘n-1’, where n is the size of that particular array.

This indexing will be similar for the multidimensional arrays as well.


### Basic Operations in the Arrays
These operations are usually performed to either modify the data in the array or to report the status of the array.

* [Traverse](/array/traversal.c) − print all the array elements one by one.
* [Insertion](/array/insertion.c) − Adds an element at the given index.
* [Deletion](/array/deletion.c) − Deletes an element at the given index.
* [Search](/array/search.c) − Searches an element using the given index or by the value.
* [Update](/array/update.c) − Updates an element at the given index.
* [Display](/array/display.c) − Displays the contents of the array.



# Linked List
A linked list is a collection of “nodes” connected together via links. 
These nodes consist of the data to be stored and a pointer to the address of the next node within the linked list.
Any amount of data can be stored in it and can be deleted from it.

Types of Linked Lists
* **Singly Link List** - The nodes only point to the address of the next node in the list
* **Doubly Linked List** - The nodes point to the addresses of both previous and next nodes
* **Circular Linked List** - The last node in the list will point to the first node on the list. It can either be singly linked or double linked.

![](/images/linked_list_1.jpeg)

### Singly Linked List
Singly linked lists contain two “buckets” in one node; one bucket holds the data and the other bucket holds the address of the next node of the list. Traversals can be done in one direction only as there is only a single link between two nodes of the same list.
<br>
![](/images/singly_linked_lists.jpeg)


### Doubly Linked Lists
Doubly Linked Lists contain three “buckets” in one node; one bucket holds the data and the other buckets hold the addresses of the previous and next nodes in the list. The list is traversed twice as the nodes in the list are connected to each other from both sides.
<br>
![](/images/doubly_linked_lists.jpeg)

### Circular Linked Lists
Circular linked lists can exist in both singly linked list and doubly linked list.<br>
Since the last node and the first node of the circular linked list are connected, the traversal in this linked list will go on forever until it is broken.
<br>
![](/images/circular_linked_lists.jpeg)


### Basic Operations in the Linked Lists
- [Insertion](/linked_list/insertion.c) − Adds an element at the beginning of the list.
- Deletion − Deletes an element at the beginning of the list.
- Display − Displays the complete list.
- Search − Searches an element using the given key.
- Delete − Deletes an element using the given key.















