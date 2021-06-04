#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// BY HUMBERTO BLADIMIR VASQUEZ LOPEZ

long suma_Base(int base,int e);

long a[50],n16b[50],c,aux_A[50],aux_n16b[50],opcion,base,e;
char d[50],salida_n16b[50];

int main(int argc, char** argv) {

	printf("      -------------------------------------------------------------\n");
	printf("                            BIENVENIDO\n");
	printf("      -------------------------------------------------------------\n");
	printf("      Para que el programa tenga un buen funcionamiento al\n");
	printf("      sumar ingrese cifra a cifra de un numero.\n\n");
	printf("      Por ejemplo 342345\n");
	printf("      Devera ingresarlo asi de izquierda a derecha:\n\n");
	printf("      cifra 0: 3\n");
	printf("      cifra 1: 4\n");
	printf("      cifra 2: 2\n");
	printf("      cifra 3: 3\n");
	printf("      cifra 4: 4\n");
	printf("      cifra 5: 5\n\n");
	printf("      Y asi debera hacer con el siguiente numero que se sumara\n\n");
	printf("      Primero se le solicitara el total de cifras a ingresar\n");
	printf("      por numero.\n\n");
	printf("      LISTO?\n\n");
	printf("      -------------------------------------------------------------\n");printf("\n");
	system("pause");
	system("cls");
	
	printf("      -------------------------------------------------------------\n");
	printf("                      BIENVENIDO A SUMAS DE BASES\n");
	printf("      -------------------------------------------------------------\n");
	printf("      OPCIONES DISPONIBLES.\n\n");
	printf("      1.BASE 2\n");
	printf("      2.BASE 3\n");
	printf("      3.BASE 4\n");
	printf("      4.BASE 5\n");
	printf("      5.BASE 6\n");
	printf("      6.BASE 7\n");
	printf("      7.BASE 8\n");
	printf("      8.BASE 9\n");
	printf("      9.BASE 10\n");
	printf("      10.BASE 11\n");
	printf("      11.BASE 12\n");
	printf("      12.BASE 13\n");
	printf("      13.BASE 14\n");
	printf("      14.BASE 15\n");
	printf("      15.BASE 16\n\n");
	printf("      SELECCIONA UNA OPCION DE 1 A 15: ");
	scanf("%d",&opcion);
	printf("      -------------------------------------------------------------\n");
	system("cls");
	switch(opcion) {
		case 1:base=2;
		printf("      -------------------------------------------------------------\n");
		printf("                         SUMA BASE %d\n",base);
		printf("      -------------------------------------------------------------\n");
		printf("      CUANTOS NUMEROS SUMARA 2 O 3? ");
		scanf("%d",&e);printf("\n");system("cls");suma_Base(base,e);break;
		case 2:base=3;
		printf("      -------------------------------------------------------------\n");
		printf("                         SUMA BASE %d\n",base);
		printf("      -------------------------------------------------------------\n");
		printf("      CUANTOS NUMEROS SUMARA 2 O 3? ");
		scanf("%d",&e);printf("\n");system("cls");suma_Base(base,e);break;
		case 3:base=4;
		printf("      -------------------------------------------------------------\n");
		printf("                         SUMA BASE %d\n",base);
		printf("      -------------------------------------------------------------\n");
		printf("      CUANTOS NUMEROS SUMARA 2 O 3? ");
		scanf("%d",&e);printf("\n");system("cls");suma_Base(base,e);break;
		case 4:base=5;
		printf("      -------------------------------------------------------------\n");
		printf("                         SUMA BASE %d\n",base);
		printf("      -------------------------------------------------------------\n");
		printf("      CUANTOS NUMEROS SUMARA 2 O 3? ");
		scanf("%d",&e);printf("\n");system("cls");suma_Base(base,e);break;
		case 5:base=6;
		printf("      -------------------------------------------------------------\n");
		printf("                         SUMA BASE %d\n",base);
		printf("      -------------------------------------------------------------\n");
		printf("      CUANTOS NUMEROS SUMARA 2 O 3? ");
		scanf("%d",&e);printf("\n");system("cls");suma_Base(base,e);break;
		case 6:base=7;
		printf("      -------------------------------------------------------------\n");
		printf("                         SUMA BASE %d\n",base);
		printf("      -------------------------------------------------------------\n");
		printf("      CUANTOS NUMEROS SUMARA 2 O 3? ");
		scanf("%d",&e);printf("\n");system("cls");suma_Base(base,e);break;
		case 7:base=8;
		printf("      -------------------------------------------------------------\n");
		printf("                         SUMA BASE %d\n",base);
		printf("      -------------------------------------------------------------\n");
		printf("      CUANTOS NUMEROS SUMARA 2 O 3? ");
		scanf("%d",&e);printf("\n");system("cls");suma_Base(base,e);break;
		case 8:base=9;
		printf("      -------------------------------------------------------------\n");
		printf("                         SUMA BASE %d\n",base);
		printf("      -------------------------------------------------------------\n");
		printf("      CUANTOS NUMEROS SUMARA 2 O 3? ");
		scanf("%d",&e);printf("\n");system("cls");suma_Base(base,e);break;
		case 9:base=10;
		printf("      -------------------------------------------------------------\n");
		printf("                         SUMA BASE %d\n",base);
		printf("      -------------------------------------------------------------\n");
		printf("      CUANTOS NUMEROS SUMARA 2 O 3? ");
		scanf("%d",&e);printf("\n");system("cls");suma_Base(base,e);break;
		case 10:base=11;
		printf("      -------------------------------------------------------------\n");
		printf("                         SUMA BASE %d\n",base);
		printf("      -------------------------------------------------------------\n");
		printf("      CUANTOS NUMEROS SUMARA 2 O 3? ");
		scanf("%d",&e);printf("\n");system("cls");suma_Base(base,e);break;
		case 11:base=12;
		printf("      -------------------------------------------------------------\n");
		printf("                         SUMA BASE %d\n",base);
		printf("      -------------------------------------------------------------\n");
		printf("      CUANTOS NUMEROS SUMARA 2 O 3? ");
		scanf("%d",&e);printf("\n");system("cls");suma_Base(base,e);break;
		case 12:base=13;
		printf("      -------------------------------------------------------------\n");
		printf("                         SUMA BASE %d\n",base);
		printf("      -------------------------------------------------------------\n");
		printf("      CUANTOS NUMEROS SUMARA 2 O 3? ");
		scanf("%d",&e);printf("\n");system("cls");suma_Base(base,e);break;
		case 13:base=14;
		printf("      -------------------------------------------------------------\n");
		printf("                         SUMA BASE %d\n",base);
		printf("      -------------------------------------------------------------\n");
		printf("      CUANTOS NUMEROS SUMARA 2 O 3? ");
		scanf("%d",&e);printf("\n");system("cls");suma_Base(base,e);break;
		case 14:base=15;
		printf("      -------------------------------------------------------------\n");
		printf("                         SUMA BASE %d\n",base);
		printf("      -------------------------------------------------------------\n");
		printf("      CUANTOS NUMEROS SUMARA 2 O 3? ");
		scanf("%d",&e);printf("\n");system("cls");suma_Base(base,e);break;
		case 15:base=16;
		printf("      -------------------------------------------------------------\n");
		printf("                         SUMA BASE %d\n",base);
		printf("      -------------------------------------------------------------\n");
		printf("      CUANTOS NUMEROS SUMARA 2 O 3? ");
		scanf("%d",&e);printf("\n");system("cls");suma_Base(base,e);break;
		default:
		printf("      OPCION NO VALIDA\n");
	}
	return 0;
}

long suma_Base(int base, int e){
	
	long w = base, r = e,totalFinal[3],i;
	if(w >= 11){
		
		for(i=0;i<r;i++){
	    printf("      -------------------------------------------------------------\n");
	    printf("                  INGRESE CIFRA A CIFRA DEL NUMERO %d\n",i+1);
	    printf("      -------------------------------------------------------------\n");
	    printf("      CUANTAS CIFRAS INGRESARA?: ");
	    scanf("%d",&c);
	
	    for(int i=0;i<c;i++){
	    printf("      Cifra [%d] ",i);
	    scanf("%s",&d[i]);
	    fflush(stdin);
	    
	    if(d[i]=='A' || d[i]=='a'){
	    	n16b[i]=10;
	    }else if(d[i]=='B' || d[i]=='b'){
	        n16b[i]=11;
	    }else if(d[i]=='C' || d[i]=='c'){
			n16b[i]=12;
		}else if(d[i]=='D' || d[i]=='d'){
			n16b[i]=13;
		}else if(d[i]=='E' || d[i]=='e'){
			n16b[i]=14;
		}else if(d[i]=='F' || d[i]=='f'){
			n16b[i]=15;
		}else if(d[i]=='G' || d[i]=='g'){
			n16b[i]=16;
		}else{
			n16b[i]=atoi(&d[i]);
		   }
	    }
	    //SE INVIERTE
	    for(int i=0;i<c;i++){
	    aux_n16b[i]=n16b[c-(i+1)]; 
	    }
	    //---------------------------------------------------------------------------//
	    int total=0, x=0;
	    for(int i=0;i<c;i++){
		total = total + (pow(w,x)*aux_n16b[i]);
	    ++x; 
	    }
        totalFinal[i]=total;
	    }	
	    //SUMA------------------------------------------------------------------------//
	    int iter=0;iter=i;
	    printf("\n");system("pause");system("cls");
	    int suma=0;
		for(int i=0;i<iter;i++){
		suma = suma + totalFinal[i];
		} 
		//DIVIDIR---------------------------------------------------------------------//
		long cociente,residuo[50],dividendo;char auxRe2[50];
        long divisor=w;int p=0;
        printf("      -------------------------------------------------------------\n");
	    printf("      SU SUMA EN BASE %d ES: ",w);
     	dividendo = suma;
	
	    while(dividendo>=divisor){
		residuo[p] = dividendo%divisor;++p;
		cociente = dividendo/divisor;
		dividendo = cociente;
		}
        residuo[p] = cociente;
        int x3=p+1;
        //FILTRANDO
        for(int i = 0;i<x3;i++){
    	if(residuo[i]==10){
    		salida_n16b[i]='A';
		}else if(residuo[i]==11){
			salida_n16b[i]='B';
		}else if(residuo[i]==12){
			salida_n16b[i]='C';
		}else if(residuo[i]==13){
			salida_n16b[i]='D';
		}else if(residuo[i]==14){
			salida_n16b[i]='E';
		}else if(residuo[i]==15){
			salida_n16b[i]='F';
		}else if(residuo[i]==16){
			salida_n16b[i]='G';
		}else{
			itoa(residuo[i],&salida_n16b[i],w);
		}
	    }
        //INVIRTIENDO------------------------------------------------------------------//
	    for(int i=0;i<x3;i++){
	    auxRe2[i]=salida_n16b[x3-(i+1)]; 
	    }
        //IMPRIMIENDO------------------------------------------------------------------//
	    for(int i=0;i<x3;i++){
		printf("%c",auxRe2[i]);
	    }
	    printf("\n      -------------------------------------------------------------\n");
	    printf("\n\n");
        
	}else{
	/*---------------------------------------------------------------------------*/
	for(i=0;i<r;i++){
	printf("      -------------------------------------------------------------\n");
	printf("                  INGRESE CIFRA A CIFRA DEL NUMERO %d\n",i+1);
	printf("      -------------------------------------------------------------\n");
	printf("      CUANTAS CIFRAS INGRESARA?: ");
	scanf("%d",&c);
	
	for(int i=0;i<c;i++){
	printf("      Cifra [%d] ",i);
	scanf("%d",&a[i]);
	} 
	//se invierte 
	
	for(int i=0;i<c;i++){
	aux_A[i]=a[c-(i+1)]; 
	}
	//---------------------------------------------------------------------------//
	long total=0;int x=0;
	for(int i=0;i<c;i++){
		total = total + (pow(w,x)*aux_A[i]);
		++x;
    }
    totalFinal[i]=total;
	}
	//---------------------------------------------------------------------------//
	int iter=0;
	iter=i;
	printf("\n");system("pause");system("cls");
	//---------------------------------------------------------------------------//
	long suma=0;
		for(int i=0;i<iter;i++){
		suma = suma + totalFinal[i];
    }	
	//---------------------------------------------------------------------------//
	long cociente,residuo[50],auxRe[50],divisor=w,dividendo,p=0;
    printf("      -------------------------------------------------------------\n");
	printf("      SU SUMA EN BASE %d ES: ",w);
	dividendo = suma;
	
	while(dividendo>=divisor){
		residuo[p] = dividendo%divisor;++p;
		cociente = dividendo/divisor;
		dividendo = cociente;
		}
    residuo[p] = cociente;
    int x3=p+1;
    //INVIRTIENDO
	for(int i=0;i<x3;i++){
	auxRe[i]=residuo[x3-(i+1)]; 
	}
        
	for(int i=0;i<x3;i++){
		printf("%d",auxRe[i]);
	}
	printf("\n      -------------------------------------------------------------\n");
	printf("\n\n");
	//system("Pause");
	}
}
