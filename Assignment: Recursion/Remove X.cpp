/*
Given a string, compute recursively a new string where all 'x' chars have been removed.

Sample Input 1 :
xaxb
Sample Output 1:
ab
*/
#include<cstring>
void removeX(char input[]) {
    
    if(input[0]=='\0')
        return ;
    
    if(input[0]=='x'){
        int len = strlen(input);
        for(int i = 0 ; i <= len; i++){
            input[i]=input[i+1];
        }
           removeX(input);//here we just call for the current x for example xx  
    }
   else
       removeX(input+1);
    
}
