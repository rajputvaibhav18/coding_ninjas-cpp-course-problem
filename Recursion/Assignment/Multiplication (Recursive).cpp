/*
Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.

Sample Input 1 :
3 
5
Sample Output 1 :
15

*/
int multiplyNumbers(int m, int n) {
    if( n ==0 )
        return 0;
    
    int temp =  multiplyNumbers( m , n-1);
    return temp + m ; 
}


