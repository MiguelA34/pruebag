#include <iostream>
using namespace std;
int main() {
	double salario, cot_ss, sueldo_bruto, sueldo_neto, impuestos, hipoteca, agua, luz, comida, ocio, gasolina, tabaco, internet, gastos, ahorras, estado;
	const double COTSS = 0.256, IRPF = 0.18, CONT = 0.05, CONT_DESMP = 0.017, GASTOS_COM = 30, IMP_CIR = 10, IBI = 30, IVA = 0.21;
	cout <<"Introduce solamente datos numéricos superiores a 0, pon 0 solamente si no gastas dinero en algún apartado" <<endl;
	cout <<"Todos los dígitos vienen dados en euros" <<endl;
	cout <<"La siguiente cuenta la hace directamente la empresa para la que trabajas:" <<endl;
	cout <<"Introduce tu salario mensual: ";
	cin >>salario;
	cot_ss = salario * COTSS;
	sueldo_bruto = salario - cot_ss;
	cout <<"Tu sueldo bruto es de: " <<sueldo_bruto <<endl;
	cout <<"Este valor es el que suele dar la empresa" <<endl;
	cout <<"Ahora se calculará el sueldo que en verdad llega" <<endl;
	impuestos = (sueldo_bruto * COTSS) + (sueldo_bruto * IRPF) + (sueldo_bruto * CONT_DESMP);
	sueldo_neto = sueldo_bruto - impuestos;
	cout <<"Esto es lo que de verdad cobras al mes: " <<sueldo_neto <<endl;
	cout <<"Ahora se calcula lo que suele ahorrar una persona:" <<endl;
	cout <<"Introduce lo que gastas en hipoteca mensualmente: ";
	cin >>hipoteca;
	cout <<"Introduce lo que gastas en agua mensualmente: ";
	cin >>agua;
	cout <<"Introduce lo que gastas en luz mensualmente: ";
	cin >>luz;
	cout <<"Introduce lo que gastas en comida mensualmente: ";
	cin >>comida;
	cout <<"Introduce lo que gastas en ocio mensualmente: ";
	cin >>ocio;
	cout <<"Introduce lo que gastas en gasolina mensualmente: ";
	cin >>gasolina;
	cout <<"Introduce lo que gastas en tabaco mensualmente: ";
	cin >>tabaco;
	cout <<"Introduce lo que gastas en internet mensualmente: ";
	cin >>internet;
	gastos = hipoteca + agua + luz + comida + ocio + gasolina + tabaco + internet + IBI + IMP_CIR + GASTOS_COM;
	ahorras = sueldo_neto - gastos;
	cout <<"Si el resultado es negativo, tienes problemas financieros" <<endl;
	cout <<"Lo que ahorras al mes es: " <<ahorras <<endl;
	cout <<"A continuación se mostrará lo que se lleva el estado de ti:" <<endl;
	estado = cot_ss + impuestos + IBI + IMP_CIR + (agua * IVA) + (luz * IVA) + (comida * IVA) + (ocio * IVA) + (gasolina * IVA) + (tabaco * IVA) + (internet * IVA);
	cout <<"Lo que el estado se lleva de ti es: " <<estado <<endl;
	cout <<"HOLA MUNDO" <<endl;
}
