#include <iostream>

using namespace std;

int main(){
    
    string phrase = "This is a phrase where small letter 'a' is replaced with capital letter 'A'.";

    for(int i=0;i<phrase.length();i++){
        if(phrase[i] == 'a'){
            phrase[i] = 'A';
        }
        cout<<phrase[i];
    }

    cout<<"\n";
    cout<<"The length of the phrase is "<<phrase.length()<< endl;
    cout<<"The word 'phrase' starts at index: "<<phrase.find("where", 0)<<endl;

    string substring = phrase.substr(10, 6);
    cout<<"In this example the substring is: "<<substring<<endl;

    return 0;

}