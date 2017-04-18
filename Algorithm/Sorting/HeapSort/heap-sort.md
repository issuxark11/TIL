# Algorithm - Sorting

## Heap Sort
- Heap sort is a comparison based sorting technique based on Binary Heap data structure. 
- It is similar to selection sort where we first find the maximum element and place the maximum element at the end. 
- Repeat the same process for remaining element.

### Heap Sort Algorithm for sorting in increasing order:
```shell
1. Build a max heap from the input data.
2. At this point, the largest item is stored at the root of the heap. Replace it with the last item of the heap followed by reducing the size of heap by 1. Finally, heapify the root of tree.
3. Repeat above steps while size of heap is greater than 1.

## Reference
* [geeksforgeeks](http://quiz.geeksforgeeks.org/heap-sort/)
