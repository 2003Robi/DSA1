#include <iostream>
#include <functions.h>

using namespace std;

int main() {
    int exercise;
    cout<<"feladat szama: ";
    cin>>exercise;
    switch (exercise)
    {
        case 1:
        {
            cout<<"a szamok: ";
            int a,b;
            cin>>a>>b;
            int result= lnko(a,b);
            cout<<"az LNKO: "<<result;
        }
        case 2:
        {
            cout<<"a szamok: ";
            int a,b;
            cin>>a>>b;
            int result= lkkt(a,b);
            cout<<"az LKKT: "<<result;
        }
        case 3:
        {
            cout<<"alap es kitevo: ";
            int b,e;
            cin>>b>>e;
            int result=pow(b,e);
            cout<<"eredmeny: "<<result;
        }
    }
    return 0;
}
