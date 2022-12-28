#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n){
    for (int i=2;i<=round(sqrt(n));i++)
        if (n%i==0) 
            return false;
    return (n==0 || n==1) ? false : true;
}

int sum(int n,int i){
    if (n==1)
        return 0;
    else {
        while (n % i != 0){
            if (n % i != 0 && isPrime(i))
                i++;
            while (not(isPrime(i)))
                i++;   
        }
        return i+sum(n/i,i);
    }
}

int factorSum(int n){
    if (n<2) return 0;
    if (isPrime(n))
        return n;
    else 
        factorSum(sum(n,2));
}

int main(){
	cout<<factorSum(1);
	return 0;
}