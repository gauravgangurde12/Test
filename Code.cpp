#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Are you Hungry ?"<<endl;
    cin>>x;
    if(x)
    {
        cout<<"Eat Something ";
    }
    else{
        cout<<"Do Study ";
        cout<<"Or else Sleep ";
    }
    return 0;
}