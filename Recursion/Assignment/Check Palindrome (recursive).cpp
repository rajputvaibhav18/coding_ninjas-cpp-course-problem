/*
Check whether a given String S is a palindrome using recursion. Return true or false.

Sample Input 1 :
racecar
Sample Output 1:
true


*/
//#include <string.h>
int l_length(char input[]){
    int len =0 ;
    for(int i = 0; input[i]!='\0' ; i++){
        len++;
    }                   //Dude recursion is not the function call it is also a beyond the call
    return len ;
}
bool cheakPalindrome(char input[] , int start , int end ){
    
    if(input[0]=='\0'||input[1]=='\0')
        return true;
    
    if(start>=end)
        return true;
    
    if(input[start]==input[end]){
      return  cheakPalindrome(input, start+1 , end-1);
    }
     else 
      return   false;
}

bool checkPalindrome(char input[]) {
    int end = l_length(input);
    return cheakPalindrome( input, 0 , end-1);
}


