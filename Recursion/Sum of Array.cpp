/*
Given an array of length N, you need to find and return the sum of all elements of the array.

Sample Input 1 :
3
9 8 9

Sample Output 1 :
26
*/
int sum(int input[], int n){
    if(n==0){
        return 0;
    }
    return  input[n-1] + sum(input,n-1 );
}
/*
// for example we give a 2 4 5 
// In the first call make like 2 4 5
//then 2 4
//then 2
//and finally 
//  5 + 0
// 4 + 5
// 2 + 9 
//we get the answer 11 */
