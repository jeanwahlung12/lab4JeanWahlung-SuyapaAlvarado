#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;
string vigenere(string,string);
string CodigoCesar(string);
int main (){
   string texto;
   string clave;
   cout << " ingrese la palabra Clave ";
   cin >> clave;
   cout << " ingrese el texto a Cifrar";
   cin >> texto;
   cout << " el cifrado vigenere es :";
   cout << vigenere(texto,clave) << endl;
   cout << " el cifrado de vigenere pasado a cifrado cesar es : " ;  
   cout <<  CodigoCesar(vigenere(texto,clave)) << endl;
return 0;
}

string vigenere(string texto, string clave){
    string nuevaclave = "";
    int cifrado;
    string cifrado2; 
    for (int i =0;i<texto.size();i++){
          if (i == clave.size()){
            i=0;
          }
          if (i<=clave.size()){
            nuevaclave = nuevaclave + clave[i];
            
          }      
          
          if (nuevaclave.size() == texto.size()){
             break;   
          }  
            
           
    }
      
int num;
    for (int i=0;i<texto.size();i++){
      int text = texto[i];
      
     
      int password = nuevaclave[i];
      
      cifrado = (text+ password)%27  ;
       
      
      if(cifrado ==1){
          cifrado2 += 'a';
      }
      if(cifrado ==2){
          cifrado2 += 'b';
      }
      if(cifrado ==3){
          cifrado2 += 'c';
      }
      if(cifrado ==4){
          cifrado2 += 'd';
      }
      if(cifrado ==5){
          cifrado2 += 'e';
      }
      if(cifrado ==6){
          cifrado2 += 'f';
      }
      if(cifrado ==7){
          cifrado2 += 'g';
      }
      if(cifrado ==8){
          cifrado2 += 'h';
      }
      if(cifrado ==9){
          cifrado2 += 'i';
      }
      if(cifrado ==10){
          cifrado2 += 'j';
      }
      if(cifrado ==11){
          cifrado2 += 'k';
      }
      if(cifrado ==12){
          cifrado2 += 'l';
      }
      if(cifrado ==13){
          cifrado2 += 'm';
      }
      if(cifrado ==14){
          cifrado2 += 'n';
      }
      if(cifrado ==15){
          cifrado2 += 'o';
      }
      if(cifrado ==16){
          cifrado2 += 'p';
      }
      if(cifrado ==17){
          cifrado2 += 'q';
      }
      if(cifrado ==18){
          cifrado2 += 'r';
      }
      if(cifrado ==19){
          cifrado2 += 's';
      }
      if(cifrado ==20){
          cifrado2 += 't';
      }
      if(cifrado ==21){
          cifrado2 += 'u';
      }
      if(cifrado ==22){
          cifrado2 += 'v';
      }
      if(cifrado ==23){
          cifrado2 += 'w';
      }

      if(cifrado ==24){
          cifrado2 += 'x';
      }
      if(cifrado ==25){
          cifrado2 += 'y';
      }
      if(cifrado ==26){
          cifrado2 += 'z';
      }
      


      
      
    } 
    return cifrado2;

 } 
 





string CodigoCesar(string);


string CodigoCesar (string palabra){
 string palabrac="";
 char temp;
 string result;
 int num;
	for (int i=0;i < palabra.size();i++){
		temp = palabra.at(i);
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
return palabrac;
}

