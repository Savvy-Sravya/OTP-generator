#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int gen();
int main()
{
    int r,e;
    srand(time(NULL));
    r = rand()/1000;
    cout<<"OTP generated is "<<r;
    cout<<"\nEnter your OTP:";
    cin>>e;
    cout<<endl;
    if(e==r)
    {
        cout<<"OTP matched\n";
    }
    else
    cout<<"OTP not matched try again";

    return 0;
}