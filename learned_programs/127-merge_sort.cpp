/*
Merge Sort
--> Based on divide and conquer alogorithm
--> In the divide and conquer algorithm, we keep on dividing a problem into subproblems recursively, until we get the most smallest problem that we can directly sort.

logic:

MergeSort(arr[],l,r)
{
    if(l<r)
    {
        mid=(l+r)/2;
        MergeSort(arr[],l,mid);//a
        MergeSort(arr[],mid+1,r);//b

        Merge(arr[],l,mid,r);
    }
}

example:
6,3,9,5,2,8,7,1
-->step 1:
    -->step a:
        6,3,9,5;
    -->step a1:
        6,3
    -->step a2:
        6 and 3 --> Merge them will sort {6,3}
        --> 3,6-->one part of the answer
    --> Go back to step a and use step b within
        -->step ab:
            9,5
        -->step ab1:
            9 and 5 --> Merge them will sort {9,5}
        --> 5,9-->second part of the answer
    --> Now merge first and second part of the answer
        --> 3,5,6,9
    The same thing is done to remaining elements at step 1: and finally both the answers will get merged

    How does the Merge function work
    consider the merging of both the answer:
    compares pointed elements and places the minimum of the two
    3,5,6,9 and 1,2,7,8
    |           |
    1

    3,5,6,9 and 1,2,7,8
    |            |
    1,2

    3,5,6,9 and 1,2,7,8
    |               |
    1,2,3

    3,5,6,9 and 1,2,7,8
      |             |
    1,2,3,5

    3,5,6,9 and 1,2,7,8
        |           |
    1,2,3,5,6

    3,5,6,9 and 1,2,7,8
          |         |
    1,2,3,5,6,7

    3,5,6,9 and 1,2,7,8
          |           |
    1,2,3,5,6,7,8,9

To be coded:
*/