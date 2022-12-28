#include <iostream>
#include <math.h>

using namespace std;

int greatestCommonPrimeDivisor(int a, int b) {
    int n=a,i=2;
    bool* arra= new bool[n+1];
    for (int j=2;j<=n;arra[j]=true,j++);
    while (i*i<=n) {
        int count=0;
        while (i*(i+count)<=n) {
            arra[i*(i+count)]=false;
            count++;
        }
        i++;
    }
    n=b,i=2;
    bool* arrb= new bool[n+1];
    for (int j=2;j<=n;arrb[j]=true,j++);
    while (i*i<=n) {
        int count=0;
        while (i*(i+count)<=n) {
            arrb[i*(i+count)]=false;
            count++;
        }
        i++;
    }
    for (int i=b;i>=2;i--)
        for (int j=a;j>=2;j--)
            if (arrb[i] and arra[j] and i==j and b%i==0 and a%j==0) return i;
    return -1;
}

int main(){
    cout<<greatestCommonPrimeDivisor(12,18);
}