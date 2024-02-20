#include <iostream>
#include <functions.h>
#include <math.h>


using namespace std;

int main() {
    int exercise;
    cout<<"feladat szama: ";
    cin>>exercise;
    switch (exercise) {
        case 1:
        {
            int x,y;
            cin>>x>>y;
            cout<<sum(x,y);
        }
        case 2:
        {
            int a,b,c;
            cin>>a>>b>>c;
            cout<<min(a,b,c);
        }

    }
    return 0;
}
