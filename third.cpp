// this program converts 1 byte to a decimal numeric number

#include <iostream>

using namespace std;

long int convertBytesToTheMaxNumberItCanStore(int num){
    long int a = 1;
    long int b = 0;
    for(int i = 0;i < num; i++){
        for(int i = 0; i < 8; i++){
            b = b + a;
            a = a * 2;
        }
    }
    return b;
}

int main(){

    // We should expect a output of 255
    cout << convertBytesToTheMaxNumberItCanStore(1) << endl;

    return 0;
}

























