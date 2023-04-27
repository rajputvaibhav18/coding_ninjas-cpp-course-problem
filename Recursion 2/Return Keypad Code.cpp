/*

Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
Return empty string for numbers 0 and 1.
Note : 1. The order of strings are not important.
2. Input and output has already been managed for you. You just have to populate the output array and return the count of elements populated in the output array.
Sample Input:
23
Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf

*/
#include <string>
using namespace std;
  int keypad(int num , string mapping[] , string output[] ){
      
      if(num==0){
          output[0]="";
          return 1;
      }
         //pickup and nonpick-up concept is here 
      string dummy = mapping[num%10];
      
      string S_output[1000];
      // here we indirectly create instances  array for the storing output array ele
      //Ex. In the first return  call we just one element and that is empty string 
      //and we append the element corresponding disired number for 2 = " "+a , " "+b
      //and so on 
      //And next call k values is 3 and we create the combination for the every 
      //element is 3 
      //next one k is 9 ...27 and so on 
      //basically 
      // main output is output array , for the call we creating instances is S_output
      int smalloutput = keypad(num/10 , mapping , S_output);
      
      int k= 0 ;
       for(int i= 0 ; i < dummy.length() ; i++){
           for(int j = 0 ; j < smalloutput ; j++){
               output[k]= S_output[j]+dummy[i];
               k++;
           }
       }
      return k ;
  }
int keypad(int num, string output[]){
   
    string mapping[]={ " " , " " , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" ,"tuv" ,"wxyz"};
    int result =  keypad(num , mapping , output);
    return result ;
}
