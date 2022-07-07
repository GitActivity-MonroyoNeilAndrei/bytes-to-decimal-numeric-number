#include <iostream>

using namespace std;

// int fibonacci(int num){
//     if (num == 0){
//         return 1;
//     }else{
//         return fibonacci(num-1) + fibonacci(num-2);
//     }
// }

int fib(int x) {
    if (x == 0){
        return 0;
    }
    if (x == 1){
        return 1;
    }

    return fib(x-1)+fib(x-2);
}

int main(){
    for(int i = 0; i <= 10; i++)
    {
        cout << i << " = " << fib(i) << endl;
    }
    return 0;
}