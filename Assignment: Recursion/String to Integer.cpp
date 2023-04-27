/*
Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.

Sample Input 1 :
00001231

Sample Output 1 :
1231
*/
int l_length(char input){
    int count = 0 ;
    for(int i = 0; i<= input[i]=='\0'; i++){
          count++;
    }
    return count ; 
}

int stringToNumber(char input[] , int len ){
    
    if(len==0){
        return input[last] = "0";
    }
    int smallno = stringToNumber()
    
}





int stringToNumber(char input[]) {
    int len = l_length(input);
    int result  = stringToNumber(input , len-1);
  
}


