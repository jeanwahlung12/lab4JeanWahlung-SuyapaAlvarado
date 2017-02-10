#include <iostream>
#include <string>
#include <cstdlib>
#include <bitset>

using namespace std;
string CodigoCesar(string);
string CodigoXOR(string, string); 

 int main(){

 string palabra;
 cout << "Ingrese el texto que desea codificar: ";
 cin >> palabra; 
 cout << "Ingrese la palabra clave: ";

 cout << CodigoCesar(palabra);


 return 0;
}


string CodigoCesar (string palabra){
 string palabrac="";
 char temp;
 string result;
 int num;
	for (int i=0;i < palabra.size();i++){
		temp = palabra[i];
		num = (int)temp;
		if (num>=121){
			if (num==121)
				num=97;
			if (num==122)
				num=98;
		}else{
		num = num+2;
		}
			
		palabrac = palabrac + (char)num;
		
	}
string CodigoXOR (string clave, string palabra){
 
 int arrayClave[clave.size];
 int arrayPalabra[palabra.size()];

 //llenar el arreglo de enteros la clave
 for (int i =0; i< clave.size(); i++){
	arrayClave[i] = (int)clave[i];	
	
 }//fin for
 //llenar el arreglo de enteros de palabras
 for (int j=0; j < palabra.size();j++){
      arrayPalabra[i] = (int)palabra[i];
 }

 } 
return palabrac;
}
