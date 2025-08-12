#include <iostream>
#include <array>
using namespace std;

int main(){
    int myArray[4]; 
    for(int i=0; i<4; i++){
        cout << "Enter an integer number: ";
        cin >> myArray[i];
    }
    cout << "{";
    for(int i=0; i<4; i++){
        if(i == 0){
            cout << myArray[i];
        }
        else{
            cout << "," << myArray[i];
        }
    }
    cout << "}" << endl;

    //Another way to initialazar arrays
    array<int, 3>myAnotherArray = {13,-1,0}; // c is an array of 12 int values
    cout << "Element          " << "Value" << endl;
    for(int i{0}; i < myAnotherArray.size(); i++){
        cout << "    " << i << endl;
        for(int j{0}; j < myAnotherArray.size(); j++){
            cout << "    " << myAnotherArray[j];
        }
    }



    /*int c[] = {1,2,3,4,5,6};
    int i = c[1+2] += 1;  //c[3]+1 --> c[3]=4, 4+1=5, c[5]=6
    cout << c[i] << endl;*/
}