// c++program to calculate number of zero's in a given number using recursion

#include <iostream>
using namespace std;

int countZeros(int n) {
    
    if(n==0){
        return 0;
    }
    
    int ld=n%10;
    int ans=countZeros(n/10);
    if(ld==0){
        return ans+1;
    }
    else{
        return ans;
    }

}


int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
