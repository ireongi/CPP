#include <iostream>
using namespace std;

int main(){
    int number;
    bool isPrime = true; /// boolean
    cin >> number; /// Scanner sc = new Scanner(System.in);  int number = sc.nextInt();

    if(number <= 1){
        isPrime = false;
    }
    else {
        for(int i=2; i<number; i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime == true)
        cout << number << " is prime number.\n"; /// System.out.println("..")
    else
        cout << number << " is NOT prime number.\n";


    return 0;
}
