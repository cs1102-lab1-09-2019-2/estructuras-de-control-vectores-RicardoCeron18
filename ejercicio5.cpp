#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c, delta, x1, x2;
    cout<<"a, b, y c separados por espacio:";
    cin>>a>>b>>c;
    if (a==0 && b==0){
        cout<<"NO hay solucion";
    }
    if (a==0){
        x1=(-c/b);
        cout<<"La solucion es "<<x1;
    }
    if ((pow(b,2)-4*a*c)<0){
        cout<<"No hay solucion";
    }
    else{
        x1=-b+(pow((pow(b,2)-4*a*c),1/2)/2*a);
        x2=b-(pow((pow(b,2)-4*a*c),1/2)/2*a);
        cout<<"Las respuestas son "<<x1<<" y "<<x2;
    }

}
