/* 
Write a program which initializes the array and then copies it's elements
into two different arrays. (All three arrays should be declared in main
program). To make the first copy of the array use the function which uses
the offset notation. To make the second copy of the array use the function
which uses the pointer notation along incrementin the pointers. The first
two functions should be taking as the arguments the source array name,
the destination array name and the arrays sizes. The third function should
be taking the name of the source array, the name of the destination array
and the pointer to the next element after the last element of the source
array. The functions calls should look like below:

double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
double dest1[5];
double dest2[5];
copy_arr(source, dest1, 5);
copy_ptr(source, dest1, 5);
copy_ptr2(source, dest1, source + 5);
*/
