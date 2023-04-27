/*
Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

Sample Input 1 :
xpix
Sample Output :
x3.14x
*/
// Change in the given string itself. So no need to return or print anything
#include<cstring>
void replacePi(char input[]) {
    if(input[0]=='\0')
        return ;
    
    if(input[0]=='p'&&input[1]=='i'){
        int i = strlen(input);
      for(;i>=0 ; i--){
          input[i+2]=input[i];
      }
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
        
        replacePi(input+1);
    }
    else
        replacePi(input+1);
}

