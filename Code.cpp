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
        int y;
        cout<<"Are you Thirsty? ";
        cin>>y;
        if(y)
        {
            cout<<"Drink Water ";
        }
    }
    return 0;
}