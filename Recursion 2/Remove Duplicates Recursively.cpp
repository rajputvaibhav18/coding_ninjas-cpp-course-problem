/*

Given a string S, remove consecutive duplicates from it recursively.
Sample Input 1 :
aabccba
Sample Output 1 :
abcba

*/
#include<cstring>
void removeConsecutiveDuplicates(char *input) {
	if(input[0]=='\0')
        return ;
    
    if(input[0]==input[1]){
        int len = strlen(input);
     for(int i = 1 ; i <= len ; i++){
         input[i]=input[i+1];
     }
        removeConsecutiveDuplicates(input);
    }
    
    else
     removeConsecutiveDuplicates(input+1);
}
