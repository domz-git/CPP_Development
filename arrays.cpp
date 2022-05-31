#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int number[20] = {0,1,2,3,4,5,6,7,8,9};
    number[0] = 10;

    for (int i = 0; i < 20; i++)
    {
        cout<<number[i];
    }
    

return 0;

}