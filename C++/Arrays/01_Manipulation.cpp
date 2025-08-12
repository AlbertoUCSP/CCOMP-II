#include <iostream>
#include <iomanip>  //library to maniplate input/output data
#include <vector>
using namespace std;

void outputVector(const vector<int>& v){
    for(int i{0}; i < v.size(); i++){
        cout << v[i] << " ";
    }
}
void inputVector(vector<int>& v){
    for(int j{0}; j < v.size(); j++){
        cin >> v[j];
    }
}

int main(){
    
    vector<int> n(7), m(10);
    cout << "The size of vector n is " << n.size() << endl;
    cout << "The elements in n before inicialization are: "; outputVector(n);

    cout << "\nThe size of vector m is " << m.size() << endl;
    cout << "The elements in n before inicialization are: "; outputVector(m);
    
    cout << "\nEnter 17 integers: " << endl;
    inputVector(n);inputVector(m);
    
    cout << "After input, elements in n are: "; outputVector(n);
    cout << "\nAfter input, elements in m are: "; outputVector(m);

    cout << "\nEvaluation: n != m" << endl;
    if(n != m){
        cout << "The vectors are not equals" << endl;
    
    vector<int> p{n};
    cout << "The size of p is " << p.size() << endl;
    cout << "The elements in p after inicialization are: "; outputVector(p);

    cout << "\nAssigning m to n:" << endl;
    n = m;
    cout << "n: ", outputVector(n); 
    cout << "m: ", outputVector(m);
    cout << "\nEvaluation: n==m" << endl;
    if(n == m){
        cout << "The vectors are equals" << endl;
    }
    cout << "n[5] is " << n[5] << endl;
    cout << "Assignig 1000 to n[5]" << endl;
    n[5] = 1000;
    outputVector(n);

    cout << "\nCurrent size of p is " << p.size() << endl; outputVector(p);
    p.push_back(1000);
    cout << "\nAfter push_back in p , the new size of p is " << p.size() << endl;
    cout << "Now p contains: ", outputVector(p);

    }

    



}