/*
Given an input string (STR), print all possible permutations of the input string.
Note:
The input string may contain the same characters, so there will also be the same permutations.
The order of permutations doesn’t matter.
Sample Input 1:
cba
Sample Output 1:
abc
acb
bac
bca
cab
cba
*/

//void printPermutations(string input){

    	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	
    */
    void permute(string a, int l, int r)  
{  
    // Base case  
    if (l == r)  
        cout<<a<<endl;  
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  
            // Swapping done  
            swap(a[l], a[i]);  
            // Recursion called  
            permute(a, l+1, r);  
            //backtrack  
            swap(a[l], a[i]);  
        }  
    }  
}  
void printPermutations(string input){

    permute(input,0,input.size()-1);
}
