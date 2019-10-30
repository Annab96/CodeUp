#include <iostream>
using namespace std;

int main(void){
    int a[3];
    int b[2];
    cin>>a[0]>>a[1]>>a[2];
    cin>>b[0]>>b[1];
    int m1, m2;
    m1 = (((a[0]>a[1])?a[1]:a[0])>a[2])?a[2]:(a[0]>a[1]?a[1]:a[0]);
    m2 = b[0]>b[1]?b[1]:b[0];
    float sum = ((float)m1+(float)m2)*1.1;
    cout << fixed;
    cout.precision(1);
    cout<<sum;
	return 0;
}
