/*

Given a string S, find and return all the possible permutations of the input string.
Sample Input :
abc
Sample Output :
abc
acb
bac
bca
cab
cba

*/
#include <string>
using namespace std;

int returnPermutations(string input, string output[]){
   	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
    if(input.size()==1)
    {
        output[0]=input[0];
        return 1;
        
    }
    int index=0;
    for(int i=0 ;i< input.size();i++)
    {
        string smalloutput[1000];
        int ans= returnPermutations(input.substr(0,i)+input.substr(i+1,input.size()-i-1),smalloutput);
        for(int j=0;j<ans;j++)
        {
            output[index++]=input[i]+smalloutput[j];
        }
    }
return index;

}

