/*
Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. Return -1 if it is not present in the array.
Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.
You should start traversing your array from 0, not from (N - 1).

Sample Input :
4
9 8 10 8
8
Sample Output :
3


*/
int lastIndex(int input[], int size, int x) {
  if(size==0)
      return -1 ;
    
    if(input[size]==x)
        return size;
    
    int temp = lastIndex(input, size-1 , x );
    return temp;
    
}
