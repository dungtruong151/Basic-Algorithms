#include <iostream>

using namespace std;

int lastDigitDiffZero(int n){
    long lastDigit=1;
    for (int i=1;i<=n;i++){
        lastDigit*=i;
        while (lastDigit % 10==0){
            lastDigit/=10;
        }
        lastDigit=lastDigit%10;
    }
    return lastDigit;
}

int main(){
	cout<<lastDigitDiffZero(5);
	return 0;
}