#include <stdio.h>

#define NUMERO_MAXIMO 100000

main(){
			
	int contJ = 1;
   	int contI = 0;
   
	for(int i = 1; i <= NUMERO_MAXIMO; i += 2){
		for(int j = 1; j <= (i/2); j += 2){
			
			if(i % j == 0)				
				contJ++;				
			
			if(contJ > 1)
				break;
			
		}
		if(contJ == 1)
			contI++;		
		
		contJ = 0;	
	}
	
	return contI;
}
