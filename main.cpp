#include <iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    int n ;
    cin >> n;


    for(int i = 2 ; i <= n ;i++)
    {
        bool x = true;
        for(int j =2 ; j*j<=i;j++)
        {
            if(i%j==0)
            {
                 x = false;

            }
        }
            if (x)
        {
        cout << i << " " ;
        }
    }



    return 0;
}
