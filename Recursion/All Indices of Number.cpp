/*
Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in the output array (in increasing order).

Sample Input :
5
9 8 10 8 8
8
Sample Output :
1 3 4
*/

int allIndexes(int input[], int size, int x, int output[]) {
    //int count = 0;
    if(size==0)
      return 0; 
    
    int temp = allIndexes(input , size-1, x ,output);
    
    if(input[size-1]==x){
        output[temp]=size-1;
      return temp+1;
    }
    else
       return temp;

}
