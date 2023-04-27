/*
Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
using recursion.

Sample Input 1 :
3
Sample Output 1 :
1.87500
*/
double geometricSum(int k) {

    if(k==0)
        return 1;
    
    return 1/pow(2 , k) + geometricSum(k-1);//here I'm first try with the normally calculation but im not 
}                                           //able to pass all case 


