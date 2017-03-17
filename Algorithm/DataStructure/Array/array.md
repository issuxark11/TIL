# Data Structure - Array

## Array introduction
```shell
# Definition
- An array is collection of items stored at continuous memory locations.
- This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., 
 the memory location of the first element of the array
```
## Advantage of array
- array elements 들에 대해 random access 허용. 원소들에 빠르게 접근 가능해짐 
- Arrays have better cache locality that can make a pretty big difference in performance.

### cache locality

## Drawbacks of array
- Size of array is fixed. Be careful buffer overflow
- Inserting a new element in an array of elements is expensive

## Properties
- In C, it is possible to have array of all types except void and functions
```shell
# What are the data types for which is not possible to create an array?
- void arr[100]; // error : declaration of 'arr' as array of voids
- void *arr[100]; // array of void pointers and function pointers allowed
```
- In C, array and pointer are different. They seem similar because array name gives the address of first element and array elements are accessed using pointer arithmetic
```shell
# Difference btw. pointer and array in C
- Pointers are used for storing address of dynamically allocated arrays and for arrays which are passed as arguments to functions
- Array name gives address of first element of array
- Array members are accessed using pointer arithmetic
- Array parameters are always passed as pointers, even when we use square brackets
```
- Arrays are always passed as pointer to functions
- A character array initialized with double quoted string has last element as ‘\0'
```shell
# What is the difference between single quoted and double quoted declaration of char array?
char arr[] = "geeks";                   // include '\0'
char arr[]= {'g', 'e', 'e', 'k', 's'};  // not include '\0'
```
- Dynamically allocated arrays are allocated memory on the heap, static or global arrays are allocated memory on data segment and local arrays are allocated memory on stack segment

## Search, Insert, Delete in unsorted array
- Search : O(n), Worst Case
- Insert : O(1), Insert Element to last position
- Delete : O(n), Worst Case

## Search, Insert, Delete in sorted array
- Search : O(Logn), Use binary search
- Insert : O(n), worst Case, all elemets have to move
- Delete : O(n), Worst Case, all elemets have to move

## Reference
* [geeksforgeeks](http://courses.geeksforgeeks.org/course/3/1/1/)