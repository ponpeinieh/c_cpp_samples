
#include <iostream>
#include <string>

//
char mytoupper(char c){
    char mask = ~(1<<5);
    return c&mask;
}

char mytolower(char c){
    char mask = 1<<5;
    return c|mask;
}
int main(){
    std::string input;
    std::cout<<"Enter a text string:";
    std::cin>>input;
    char mask = ~(1<<5);
    for(unsigned n=0; n<input.length(); n++){
        //lower case to upper case
        if(input[n]>='a' && input[n]<='z'){
            //input[n]-=('a'-'A');
            //'a': 01100001 -> 'A': 01000001
            //clear the 6th bit 
            //input[n]&=mask;
            input[n]=mytoupper(input[n]);
        }
    }
    std::cout<<input;
}