#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
int main() {
	int totalM=16;
	int suma=0;
	int prom=0;
	const int f=4, c=4;
	int matriz[f][c];
	srand(time(0));
	//crear matriz
	for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			matriz[i][j]=rand()%100+1;
			cout<<matriz[i][j]<<"  ";
		}
		
		cout<<endl;
		
		}
		
		cout<<endl;
	// promedio general de la matriz	
		    for(int i = 0; i <4; i++) {
        for(int j = 0; j <4; j++){
        	
        	suma += matriz[i][j];
		}
                
    }
    prom = suma / totalM;
    cout << "El promedio total es: " << prom << endl;
    		
			
	//suma pares de cada columna
			
			//array almacena la suma de los numeros pares
		int sumpares[4]={0,0,0,0};
		
    		
    		for(int j = 0; j <4; j++){
    		
    		for(int i = 0; i <4; i++){
        	if(matriz[i][j]%2==0){
        	sumpares[j]+= matriz[i][j];
				
			}
        	
			}
        	
		}
     
    cout<<endl;
    for(int j = 0; j <4; j++){
    cout<< "la suma de todos los numeros pares de la columna "<< j+1<< " es: "<<sumpares[j]<<endl;	
	}
	
	//suma impares de cada columna
	
		//array almacena la suma de los numeros impares
		int sumimpares[4]={0,0,0,0};
		
    		
    		for(int j = 0; j <4; j++){
    		
    		for(int i = 0; i <4; i++){
        	if(matriz[i][j]%2==1){
        	sumimpares[j]+= matriz[i][j];
				
			}
        	
			}
        	
		}
     
    cout<<endl;
    for(int j = 0; j <4; j++){
    cout<< "la suma de todos los numeros impares de la columna "<< j+1<< " es: "<<sumimpares[j]<<endl;	
	}
	cout<<endl;
	
	
	// numero mayor
	
int maximo=matriz[0][0];
 			for(int i=0; i<4; i++){
	        	for(int j=0; j<4; j++){
				   if(matriz[i][j]>maximo){
				   	maximo = matriz [i][j];

					}
				}  
			} 
			
  			cout<<"El numero maximo es: "<< maximo<<endl;
  			cout<<endl;
  			
  	//numero minimo
  	
	  int minimo=matriz[0][0];
	  
 			for(int i=0; i<4; i++){
	        	for(int j=0; j<4; j++){
				   if(minimo>matriz[i][j]){
				   	minimo = matriz [i][j];

					}
				}  
			} 
			
  			cout<<"El numero minimo es: "<< minimo<<endl;
	  		cout<<endl;
	  		
	// ordenar de forma ascendente la fila 2
	
	int aux=0;
	 for(int i=0; i<4; i++){
	        	for(int j=i+1; j<4; j++){
				   if(matriz[i][1]>matriz[j][1]){
					 	aux = matriz[i][1];
					 	matriz[i][1] = matriz[j][1];
					 	matriz[j][1] = aux;
					}
				}  
			} 
		cout<<"los numeros ordenados de menor a mayor de la fila 2 son: "<< endl;
			for(int i=0; i<4; i++){
				cout<< matriz[i][1] << " "<<endl;
			}  		
			
	
	
	//ordenar de forma descendente la columna 3
int aux1=0;
 		for(int i=0; i<4; i++){
	        	for(int j=0; j<4; j++){
				   if(matriz[i][2]>matriz[j][2]){
					 	aux1 = matriz[i][2];
					 	matriz[i][2] = matriz[j][2];
					 	matriz[j][2] = aux1;
					}
				}  
			} 
		cout<<"los numeros ordenados de menor a mayor de la tercera columna son: "<< endl;
			for(int i=0; i<4; i++){
				cout<< matriz[i][2] << " "<<endl;
			}
	
	
	
		for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			
			cout<<matriz[i][j]<<"  ";
		}
	  	cout<<endl;	
		}
	
	// Intercambiar la 2 y 4 columna
int temp;	
	for(int i=0; i<4; i++){	
	temp=matriz[i][1];
	matriz[i][1]=matriz[i][3];
	matriz[i][3]=temp;
		}
		
		

		
		cout<<"matriz luego del intercambio de de columna 2 y 4"<<endl;
		
					for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			
			cout<<matriz[i][j]<<"  ";
		}
	  	cout<<endl;	
		}
	}
	
