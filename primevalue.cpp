#include <iostream>
using namespace std;

int main() {

    for (int N = 1; N <= 100; N++){
        if (N <= 1){
            continue;
        }

        bool prime = true;

        for (int i = 2; i * i <= N; i++){
            if ( N % i == 0){
                prime = false;
            }
        }

        if (prime){
            cout << N << "is prime \n";
        }else {
            cout << N << "is not prime \n";
        }

    }
}