/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c=0, atual=0, ant=0, igual=0;
  int i=0, contadora=0;

  while (c != '\n') {
    scanf("%c", &c);
	if(contadora==0){
		atual=c;
		ant=c;
	}
	else{
		ant=atual;
		atual=c;
	}
        if((atual=='.'|atual== ','| atual=='-'| atual==' '| atual=='\n') && (ant!='.' && ant!=',' && ant!=' ' && ant!='-')){
		i++;
		if(!(ant>='a' && ant<='z') && !(ant>='A' && ant<='Z')){
			igual=1;
}
	}
	else if((ant=='.'|ant== ','| ant=='!') && (atual!='.' && atual!=',' && atual!=' ' && atual!='-' && atual!='\n')){

				if(igual==1 && !(atual>='a' && atual<='z')&& !(atual>='A' && atual<='Z')){
					i--;
				}				
		igual=0;
}
    contadora++;
  }
  


  printf("%d\n", i);
  return 0;
}

