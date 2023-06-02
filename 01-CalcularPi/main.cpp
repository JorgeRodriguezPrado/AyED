#include <iostream>
using namespace std;

double calcularPi(){
	double pi = 0.0;
	int numerador = 1;
	int denominador = 1;
	int iteraciones = 1000000;
	
	for(int i = 0; i <iteraciones; i++){
		pi += numerador * (1.0 / denominador);
		numerador *= -1;
		denominador += 2;
		
		if(static_cast<int>(pi * 1e6) == 3141592){
			break;
		}
	}
	return pi * 4;
}

double calcularPi(){
	double pi = 0.0;
	int numerador = 1;
	int denominador = 1;
	int iteraciones = 1000000;
	
	for(int i = 0; i <iteraciones; i++){
		pi += numerador * (1.0 / denominador);
		numerador *= -1;
		denominador += 2;
		
		if(static_cast<int>(pi * 1e6) == 3141592){
			break;
		}
	}
	return pi * 4;
}

int main(int argc, char** argv) {
	double pi = calcularPi();
	cout.precision(7);
	cout << "Valor de pi: " << pi << endl;
	
	return 0;
}
