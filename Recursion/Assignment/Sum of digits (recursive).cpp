/*
Write a recursive function that returns the sum of the digits of a given integer.

Sample Input 1 :
12345
Sample Output 1 :
15

*/
int sumOfDigits(int n) {
    if(n==0)
        return 0;
    
    int temp = sumOfDigits(n/10);
    return temp + (n%10);
    
}


