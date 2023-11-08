 Data Structure and Algorithm

Data structures is the programmatic/system way of storing/organizing data so that data can be used efficiently.
Algorithm is a step-by-step procedure, which defines a set of instructions to be executed in a certain order to get the desired output.

Categories of algorithm
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

## Arrays
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
* Search − Searches an element using the given index or by the value.
* Update − Updates an element at the given index.
* Display − Displays the contents of the array.











