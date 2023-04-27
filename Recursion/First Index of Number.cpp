/* 
Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
First index means, the index of first occurrence of x in the input array.

Sample Input :
4
9 8 10 8
8
Sample Output :
1

*/

int firstIndex(int input[], int size, int x) {
    if(size==0){
        return -1;
    }
    
    if(input[0]==x){
        return 0;   //here we return the 1 it's show position of the element not the index
    }
    
    int temp = firstIndex(input+1, size-1 , x);//here we just provide the array cutting one size simply
    
       if(temp==-1)
        return -1 ;
    
     else 
         return temp+1;
        
    
}
