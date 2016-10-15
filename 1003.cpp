#include <iostream>
using namespace std;
int arr[101];
int add(int num, int sum)
{
    sum+=num;
    if(sum <= 100)
    {
        arr[sum]++;
        add(6,sum);
        add(9,sum);
        add(20,sum);
    }
}
void loop()
{
    for(int i = 0 ; i <= 101 ; i++)
    {
        arr[i] = 0;
    }
    add(6,0);
    add(9,0);
    add(20,0);
}
int main()
{
    loop();
    int arr2[100],count = 0,get;
    cin>>get;
    if(get < 6)
    {
        cout<<"no"<<endl;
        return 0;
    }
    for(int i = 0 ; i <= 100 ; i++)
    {
        if(arr[i] > 0)
        {
            arr2[count] = i;
            count++;
        }
    }

    for(int i = 0 ; i < count ; i++)
    {
        if(arr2[i] <= get)
        {
            cout<<arr2[i]<<endl;
        }
    }
    return 0;
}
