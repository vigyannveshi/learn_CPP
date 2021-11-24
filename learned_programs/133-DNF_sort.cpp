/*
DNF-Dutch National FLag--> also called (0,1,2) sort

--> used for sorting  an array with three elements--> 0,1,2;

0--> zeroes(RED)
1--> ones(white)-->low
1 to 2-->unknown()-->mid
2--> twos(blue)-->high

It symbolises the dutch national flag, hence DNF algorithm

logic:
if 0, swap arr[low] and arr[mid], low++,mid++;
if 1, mid++;
if 2, swap arr[mid] and arr[high],high--;

exit if(mid==high)

Example:1 1 2 0 0 1 2 2 1 0

to be coded
*/

