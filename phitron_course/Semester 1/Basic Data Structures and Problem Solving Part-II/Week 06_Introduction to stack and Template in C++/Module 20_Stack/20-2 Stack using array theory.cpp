/*
stack using array
a)static array
b)dynamic array

static array:-
a[500];
a[1,3,5,6,7,0,0,0,..499];
->stack size = 5;
1) Top most element -> a[stack size - 1] -> a[4] = 7
2) Delete top (pop) -> size 1 komano
3) Add to top (push) -> size 1 barono
4) complexity O(1)
-> Dynamic array
1) push -> if stack size > sz; grow();
*/
