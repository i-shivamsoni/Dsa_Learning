
# Introduction

## Data structures

Data structure can be defined as arrangement of collection of data items so that they can be utilized efficiently, operations on that data can be done efficiently. So it's all about the arrangement of data and the operations on the data that are efficient operations on the data. So during the execution of a program how the program will manage data inside the main memory and perform the operations. That is data structure. So the arrangement or organizing of the data inside the main memory for efficient utilization by the application that arrangement is called as a Data Structure. So data structures are formed in the main memory, during the execution time of a program. When the program runs it needs the data.

## Databases

 A database means arranging the data in some model like say a relational model in the permanent storage, so that it can be retrieved or to accessed by applications easily, That arrangement in the hard disk, or in the permanent storage, It's called as database.

## Data WareHouses

So commercial data can be categorized into 2, that is operational data or legacy data, old data. Operational data that is used daily, and Legacy data can be kept as storage somewhere, if required we can fetch that data and use it, or you can say historical data. So, that historical data can be kept on array of disk, just because, imagine 10 years of data, or 50 years of data, is kept on, not just one disk, an array of disk. So the large size data which is kept here that is acting as a historical data for any commercial form, This is data warehouse.
Algorithms used for Data WareHouses are called as data minging algorithms.

## Big Data

Big Data. With the start of internet, a huge sized data is accumulating, day by day in Internet, that data is about things, about people, about places, lot of data is available in the Internet. And by analyzing that data we can take a lot of decisions, that is for management, for governance, or for businesses. Analysis is very useful about that data. Storing and utilizing that very large sized data, that study is Big Data. That study is Big Data.

>>**Data Structure** is in ***main memory***, during the execution of a program, arrangement of data here. And arrangement of data on the ***disk*** is **Database**; Arrangement of data in the ***array of disk*** is **Data Warehouse**. That is not operational,That is not used day to day. And, the ***Big Data***, that is used in **Internet**.

## Memory

### Stack vs Heap Memory

So, the 1st address is 0 bytes, and the last address is 65535. So total, 65536. That is, 64*1024, so it is 64 kilobytes.
In C C++ programming, Number of bytes taken by integer depends on the compiler, and the operating system, and the hardware, it depends on various things. So, we say mostly, it depends on the compiler.  the memory is divided into smaller addressable units that are called as bytes. So, memory is divided into bytes.

Entire main memory is divided into three sections

- Stack
    when the code is loaded inside the memory and the main function starts execution , a Stack frame of main function, or it is also called as activation record of main function, activation record of main function.
    *How much memory is required by a function?*
    Depends on the number of variables and their sizes. And this is decided by compiler only. So this memory is automatically created, and automatically destroyed, the programmer doesn't have to do anything for its allocation and destruction, just programmer has to declare the variable. So the conclusion is, whatever the variables you declare in the program, or whatever the parameters your functions are taking, for all of them, memory is allocated inside the stack, and it is automatically created, and automatically destroyed when the function ends.
    The creation of the stack record goes in a manner so this area is called as stack.
- Heap
    If the things are kept one above another, or just randomly, we use the term Heap. The heap memory is unorgnaised. It should be organised as a resourse on the basis of the requirement. We can access heap memory using pointers.
    Dynamically allocate the memory using the new / malloc. and
    deallocate using Delete / free.
    Heap memory should be explicitly requested, and explicitly released, or disposed. Otherwise, if you are not releasing it, then the memory will be still belonging to your program, and that memory cannot be used again, so it causes loss of memory, and the loss of memory is called as **memory leak**. And if you continue the same thing in the program for many times, then at one stage, the heap memory may be full. There will be no free space in heap memory. heap memory.
    So whenever you allocate the memory, heap memory, and if you don't need it, release the memory.
- Code Block  
     The machine code of the program, first it should be brought inside the main memory. So it is brought inside the code section. That section is called as code section, that not be fixed. It depends on the size of program. So this is the code section, area where the machine code of the program is loaded. Now, once it is loaded, the CPU will start executing the program, and this program will utilize the remaining memory as divided into stack and heap.

The size of the memory is a static value. When it was decided? compile time. So, when everything is done at compile time, or before run time, it is called static. So, this memory allocation is static.

## Physical vs Logical Data Structures

- Physical Data Structure
    Basically these are two.
  - Array
  - Linkedlist  
    With the combinationn of these two we can create new Physical data structures.

 These data structure decides or defines how the memory is organized, how the memory is allocated. Physical data structures are actually meant for storing the data, they will hold the data, they will actually store the data in the memory.

- Logical data Structure
    1. { Stack ,Queues } linear
    2. { Trees, Graphs} non linear
    3. { Hash Table } tabular  
Data structures are actually used in algorithms. And for implementing these data structures,we need physical data structures.
they are useful for performing logical op on data.

## ADT

Abstract data type, related to Object Oriented Programming.
When the class is written, we can just create the object of the class and use it. So, how internally the things are working, we need not worry ,That's what, it's Abstract. So, the concept of ADT, define the data, and operations on data together, and let it be used as data type, by hiding all the internal details.
exmaples

- add
- search
- sort
- delete

## Time and Space Complexity

The Analysis of run time of an code or algorithm gives us  time complexity.
The Analysis of space taken by an program at the run time  gives us  space complexity.
`Hello Datastructures`
