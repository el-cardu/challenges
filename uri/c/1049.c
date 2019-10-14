#include <stdio.h>
#include <string.h> 

int main() {

	char w1[30], w2[30], w3[30];

	gets(w1);
	gets(w2);
	gets(w3);
	
	if (strcmp(w1, "vertebrado") == 0) {
		
        if (strcmp(w2, "ave") == 0) {
			
            if (strcmp(w3, "carnivoro" ) ==0) {
				printf("aguia\n");
			}
			
            if (strcmp(w3, "onivoro") == 0){
				printf("pomba\n");
			}
		
        }

		if (strcmp(w2, "mamifero") == 0) {
			
            if (strcmp(w3, "onivoro") == 0) {
				printf("homem\n");
			}
			
            if (strcmp(w3, "herbivoro") == 0){
				printf("vaca\n");
			}
		
        }
	}

	if (strcmp(w1, "invertebrado") == 0) {
		
        if (strcmp(w2, "inseto") == 0) {
		
        	if (strcmp(w3, "hematofago") == 0) {
				printf("pulga\n");
			}
		
        	if (strcmp(w3, "herbivoro") == 0) {
				printf("lagarta\n");
			}
		
        }
		
        if (strcmp(w2, "anelideo") == 0) {

			if (strcmp(w3, "hematofago") == 0) {
				printf("sanguessuga\n");
			}

			if (strcmp(w3, "onivoro") == 0) {
				printf("minhoca\n");
			}
		
        }
	}
    
    return 0;

}