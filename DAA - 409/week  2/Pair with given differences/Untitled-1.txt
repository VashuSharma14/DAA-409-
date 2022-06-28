#include <iostream>
using namespace std;

int main()
{
    int n,diff,count=0;
    cin >> n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> diff;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]-a[j]==diff)
                count++;
        }
    }
    
    cout << "Total pairs with given difference : " << count << endl;
    return 0;
}