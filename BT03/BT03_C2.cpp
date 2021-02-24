#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n=s.size();
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(s[i]==s[j])
                count ++;
        }
    }
    int check=0;
    if(n%2==0)
        check=count/n;
    else
        check=count/(n-1);
    if(check==n/2)
        cout << "YES";
    else
        cout << "NO";
}
