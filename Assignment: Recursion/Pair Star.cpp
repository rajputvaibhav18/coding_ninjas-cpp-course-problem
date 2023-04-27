/*
Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
Sample Input 1 :
hello
Sample Output 1:
hel*lo

*/
// Change in the given string itself. So no need to return or print the changed string.
#include<cstring>
void pairStar(char input[]) {

    if(input[0]=='\0')
        return ;
    
    if(input[0]==input[1]){
        int len = strlen(input);
      for( i= len ; i>= 0 ; i--){
          input[i+1]=input[i];
      }
        input[1]='*';
        pairStar(input+1);
    }
    else
        pairStar(input+1);
}
