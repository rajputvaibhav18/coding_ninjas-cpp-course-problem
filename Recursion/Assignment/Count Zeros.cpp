/*
Given an integer N, count and return the number of zeros that are present in the given integer using recursion.

Sample Input 1 :
0
Sample Output 1 :
1

*/

int countZeros_num(int n) {
    
    
    if(n==0)
     return 0 ;
    
    int temp = countZeros_num(n/10);//In the temp we return the values from the privies function 
                                //so don't do any calculation .....      
    if(n%10==0)
        return temp+1;
    else
       return temp;
}

int countZeros(int n){
    if(n==0)
        return 1;
    else 
        return countZeros_num(n);
}

