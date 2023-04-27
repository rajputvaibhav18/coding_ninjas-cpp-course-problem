/*
Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.
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
#include <iostream>
#include <string>
using namespace std;

void printKeypad(int num , string output){
    if(num==0){
        cout<<output<<endl;
        return ;
    }
    string mapping[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string input = mapping[num%10];
     for(int i=0; i < input.size(); i++){
     printKeypad(num/10 ,input[i]+output);
    }
}

void printKeypad(int num){
    string output;
    printKeypad(num , "");
}
