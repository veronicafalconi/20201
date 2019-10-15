/*Realizar un programa que contenga un menú con las siguientes opciones*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main()
{
	int opcion;
	float a,b,c,x1=0,x2=0,base,alt,area=0;
	do
	{
	
	printf("Menu principal\n1.Ecuacion Cuadratica\n2.Area del Triangulo\n3.Salir\n");
	printf("Escoja la opcion:");
	scanf("%d",&opcion);
	switch(opcion)
	{
		case 1:
			printf("Ingrese el coeficiente a:");
			scanf("%f",&a);
			printf("Ingrese el coeficiente b:");
			scanf("%f",&b);
			printf("Ingrese el coeficiente c:");
			scanf("%f",&c);
			x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
			x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
			printf("El resultado de x1 es %.2f\n",x1);
			printf("El resultado de x2 es %.2f\n",x2);
		break;
		case 2:
			printf("Ingrese la base:");
			scanf("%f",&base);
			printf("Ingrese la altura:");
			scanf("%f",&alt);
			area=(base*alt)/2;
			printf("El area del triangulo es %.2f\n",area);
		break;
		case 3:
			exit(0);
		default:
			printf("Opcion invalida");
		break;
			
	}
 }while(opcion<=3);
}
