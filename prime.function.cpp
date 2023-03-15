#include <iostream>
#include<math.h>
using namespace std;

int prime(int n){
    int count = 0;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            count++; 
        }
    }
    return count;
}

int main(){
    int n, count;
    cout<<"Input the number you want to know if it's prime: ";
    cin>>n;
        if (n<2) {
            cout <<n<< " This is not a prime \n";
        }
        else{
            count=prime(n);
            if (count==0){
                cout << "This is a prime";
            }
            if (count>0){
                cout << "This is not a prime";
            }
        }
    return 0;
}




