#include <iostream>
using namespace std;
#define MAX 100

int main()
{
int key,testc,n,c[MAX],i,j,l = 0;
int arr[MAX];
int flag = 0;

cout<<"enter the no.of test cases:"<<endl;
cin>>testc;

for(i = 0 ; i < testc ; i++)
{
    cout<<"enter the size of array: ";
    cin>>n;

    for(j = 0 ; j < n ; j++)
    {
         cin>>arr[j];
    }

    cout<<"enter the key to found"<<endl;
    cin>>key;

    for(int k = 0 ; k < n ; k++)
    {
        if(arr[k] == key)
        {
            c[l] = k + 1;
            l++;
        }
        else if (arr[k] == arr[n])
        {
            flag = 1;
        }

    }

}

cout<<endl;
cout<<"----------------OUTPUT-------------------"<<endl;


  for(i = 0 ; i < l; i++)
  {
      cout<<"Present"<<"-"<<c[i]<<endl;
  }
  if (flag == 1)
  {
      cout <<"NOT PRESENT"<<endl;
  }
}
