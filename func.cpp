#include "func.h"

int _show(int n,car* c)
{
        if (n==0)
        {
            n=1;
            c->SetCar("none", 0, 0, 0, 0);
        }
        c->print();
        return n;
}

void _change(car *c)
{
    char* mod;
    mod=new char[20];
    int sp;
    int r;
    int g;
    int b;
    cout<<"Input model: "<<endl;
    cin>>mod;
    cout<<"\nInput speed: "<<endl;
    cin>>sp;
    cout<<"\nInput red: "<<endl;
    cin>>r;
    cout<<"\nInput green: "<<endl;
    cin>>g;
    cout<<"\nInput blue: "<<endl;
    cin>>b;
    c->SetCar(mod, sp, r, g, b);
}

int _delete(car c)
{
    int n=0;
    n=_show(n, &c);
    return 0;
}
