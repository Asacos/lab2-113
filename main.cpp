#include <iostream>
#include <cstring>
#include "car.h"
#include "func.h"

int main()
{
    using namespace std;
    car c;
    int n=0;
    int l=0;
    while (l==0)
    {
        int ch;
        cout<<"Select what to do:\n 1. Show\n 2. Change\n 3. Delete\n 4. Exit"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            n=_show(n, &c);
            continue;
        case 2:
            _change(&c);
            continue;
        case 3:
            n=_delete(c);
            continue;
        case 4:
            l=1;
            break;
        default:
            continue;
        }
    }
    return 0;
}

