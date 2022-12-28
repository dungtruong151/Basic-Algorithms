#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n){
    for (int i=2;i<=round(sqrt(n));i++)
        if (n%i==0) 
            return false;
    return (n==0 || n==1) ? false : true;
}

int main(){
	cout<<isPrime(5);
	return 0;
}