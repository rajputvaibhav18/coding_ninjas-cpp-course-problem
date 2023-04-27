/*
Given the number 'n', find out and return the number of digits present in a number .

Sample Input 1 :
 156
 
Sample Output 1 :
3
*/

int count(int n){

  if(n==0){
      return 0;
  }
    
   int temp = count(n/10);
   return temp+1;
}
