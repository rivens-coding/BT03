#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int count;
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]!='*')
            {
                if(arr[i+1][j+1]=='*')
                    count++;
                if(arr[i][j+1]=='*')
                    count++;
                if(arr[i+1][j]=='*')
                    count++;
                if(i>0)
                {
                    if(arr[i-1][j]=='*')
                        count++;
                    if(arr[i-1][j+1]=='*')
                        count++;
                }
                if(j>0)
                {
                    if(arr[i][j-1]=='*')
                        count++;
                    if(arr[i+1][j-1]=='*')
                        count++;}
                if(i>0&&j>0)
                {if(arr[i-1][j-1]=='*')
                    count++;}
                arr[i][j]=char(count+48);
                count = 0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}
