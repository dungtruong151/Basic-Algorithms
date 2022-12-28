#include <iostream>
#include <vector>

using namespace std;

int maxFraction(vector<int> numerators, vector<int> denominators){
    int index=0;
    for (int i=1;i<numerators.size();i++){
        if (numerators[i]*denominators[index]-numerators[index]*denominators[i]>0) index=i;
    }
    return index;
}

int main(){ 
    vector<int> a;
    a.push_back(5);
    a.push_back(2);
    a.push_back(5);
    vector<int> b;
    b.push_back(6);
    b.push_back(3);
    b.push_back(4);
    cout<<maxFraction(a,b);
    return 0;
}