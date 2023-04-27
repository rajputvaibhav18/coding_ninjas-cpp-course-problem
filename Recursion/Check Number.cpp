/* 
Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.

Sample Input 1 :
3
9 8 10
8

Sample Output 1 :
true

*/
bool checkNumber(int input[], int size, int x) {
 if(size==0)
     return false;
  
  if(input[0]==x)
         return true;
  
    bool temp =  checkNumber(input+1 , size-1 , x);
    return temp ;
}
