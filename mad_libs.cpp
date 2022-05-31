#include <iostream>
#include <cmath>

using namespace std;

int main(){

    string color, plural_noun, celebrity;

    cout<<"Roses are red"<<endl;
    cout<<"Violets are blue"<<endl;
    cout<<"I love you"<<endl;
    cout<<""<<endl;
    cout<<"Enter color instead of 'red': ";
    cin>>color;
    cout<<"Enter a plural noun instead of 'violets': ";
    cin>>plural_noun;
    cout<<"Enter a celebrity instead of 'you': ";
    cin>>celebrity;

    cout<<""<<endl;
    cout<<"Roses are "<<color<<endl;
    cout<<plural_noun<<" are blue"<<endl;
    cout<<"I love "<<celebrity<<endl;

return 0;

}