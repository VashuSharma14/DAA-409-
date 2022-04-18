#include<iostream>
#include<math.h>
#define MAX 100
using namespace std;

int jumpsearch(int arr[],int key, int n)
{
         int start = 0 , last = 0;
          last = sqrt(n);

          while(arr[last] < key && start < n)
          {
             start = last;
             last = last + sqrt(n);
             if(last > n - 1)
             {
                 last = n;
             }

          }
          for (int i = start ; i < last ; i++)
          {
              if(arr[i] == key)
              {
                  return i;
              }
          }
          return -1;

}


int main()
{
    int arr[MAX];
    int key,n,r = 0;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    cout<<"enter the elements:"<<endl;
    for(int i = 0 ; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key to be found"<<endl;
    cin>>key;

    r = jumpsearch(arr,key,n);
    if(r > 0)
    {
        cout<<"ELEMENT FOUND AT INDEX: "<<r+1<<endl;
    }
    else
    {
        cout<<"NUMBER NOT FOUND"<<endl;
    }


}
