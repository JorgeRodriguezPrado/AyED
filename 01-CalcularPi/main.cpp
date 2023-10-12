#include <iostream> 
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double pi=0;
    double nro=1;
    for (int i = 0 ; abs(nro*4) > 0.0000001; i++)
    {
        nro = pow(-1,i)/(2*i+1);
        pi+= nro;

    }
    cout << setprecision(6)<< fixed << pi*4 ;

}
