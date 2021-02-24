#include <iostream>

using namespace std;

int main()
{
    long int n;
    cin >> n;
    int arr[n];
    int count =0;
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(arr[i]==arr[j])
                count ++;
        }
    }
    if(count!=0)
        cout << "YES";
    else
        cout << "NO";
}
