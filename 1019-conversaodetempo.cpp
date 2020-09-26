#include <iostream>
#include <math.h>

using namespace std;

    int N, horas, minutos, segundos;


int dadosInicio();
int execucao();
int main()
{
    dadosInicio();
    execucao();

        cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}


int dadosInicio(){
    cin >> N;
    return N;
}

int execucao(){

    horas = (N/3600);
      minutos = (N -(3600*horas))/60;
    segundos = (N -(3600*horas)-(minutos*60));

return horas, minutos, segundos;
}
