#include <bits/stdc++.h>

using namespace std;

int power(int x, int y)
{
    if(y==0){
        return 1;
    }else{
        int mid = y/2;
        if(y%2==0){
            int c1 = power(x,mid);
            return c1*c1;
        }else{
            int c1 = power(x,mid);
            return c1*c1*x;
        }
    }
}

int main()
{
    int x,y;

    cin>>x>>y;

    cout<<power(x,y)<<endl;
    
    return 0;
}
