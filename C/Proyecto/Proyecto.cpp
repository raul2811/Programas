#include<conio.h>
#include<locale.h>
#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
int x;//Almacena El Numero maximo que tendra el arreglo
printf("Ingrese La Cantidad De Clientes Que Desea Ingresar\n-");
scanf(" %d",&x);//capturamos el numero
//------------------------------------//
struct Datos
#define clientes x   
{
char ndd[50];//Nombre Del Distribuidor
char ndc[50];//Nombre Del Cliente
char ndp[50];//Nombre Del Producto
char tdp[50];//Tipo De Producto
int cantidad;//Cantidad De Producto
float pdp;//Precio Del Producto
float subtotal;//subtotal De La Compra
float total;//Total De La Compra
}ftr[clientes];//factura
//------------------------------------//
int num;float incremento,porciento7;
porciento7=(0.07);//siete porciento
//------------------------------------//
printf("\n\t\tDATOS DE VENTA");
for (num=0;num<clientes;num++)
{
printf("\n\nCliente#%d\n",num+1);    
getchar();//borra la basura del buffer de entrada 
printf("\nIngresa El Nombre Del Distribuidor\n-");
//Utilizo cin para evitar problema con los espacions//
cin.getline(ftr[num].ndd,50,'\n');//Almacenamos El Nombre Del Distribuidor En La Variablle ftr.ndd//
printf("\nIngrese El Nombre Del Cliente\n-");
cin.getline(ftr[num].ndc,50,'\n');//Almacenamos El Nombre Del Cliente En La Variablle ftr.ndc//
printf("\nIngrese El Nombre Del Producto\n-");
cin.getline(ftr[num].ndp,50,'\n');//Almacenamos El Nombre Del Producto En La Variablle ftr.ndp//
printf("\nIngrese El Tipo De Producto\n-");
cin.getline(ftr[num].tdp,50,'\n');//Almacenamos El Tipo De Producto En La Variablle ftr.tdp//
printf("\nIngrese La Cantidad De Producto\n-");
scanf("%d",&ftr[num].cantidad);//Almacenamos La Cantidad De Producto En La Variablle ftr.cantidad//
printf("\nIngrese El Precio Del Producto\n-");
scanf("%f",&ftr[num].pdp);//Almacenamos LEl Precio Del Producto En La Variablle ftr.pdp/
}
printf("\nVentas:\n");
for (num=0;num<clientes;num++)
{
printf("\n\nVenta#%d\n",num+1);  
ftr[num].subtotal=(ftr[num].pdp*ftr[num].cantidad);
incremento=(ftr[num].subtotal*porciento7);
ftr[num].total=(ftr[num].subtotal+incremento);
printf("\tDistribuidora:%s\nCliente:%s\nProducto:%s\nTipo:%s\nCantidad:%d\nPrecio:$%.2f\nSubTotal:$%.2f\t\tImpuesto:$%.2f\nTotal:$%.2f\n"
,ftr[num].ndd,ftr[num].ndc,ftr[num].ndp,ftr[num].tdp,ftr[num].cantidad,ftr[num].pdp,ftr[num].subtotal,incremento,ftr[num].total);
}
//----------------------------------//
printf("\nPresione enter para cerrar\n");
getch();
return 0;
}

