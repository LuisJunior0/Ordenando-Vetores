#include <stdio.h>


int main(){
	
	int i, j, aux;
	
	int vetor[5];
	
	 //Solicita os numeros e guarda
	for(i = 0; i < 5; i++){
		printf("Digite o %d numero a ser ordenado: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	//inicio do algoritmo Bubble sort

	for(i = 0; i < 5; i++){
		for(j = 0; j < 5 - i; j++)
		
		if(vetor[j] > vetor[j + 1]){
			aux = vetor[j];
			vetor[j] = vetor [j + 1];
			vetor[j + 1] = aux;
			
			//faz a troca da posição comparada com a prox ( + 1 ), isso se a condição IF for verdadeira, onde essa inicial é maior que a seguinte.
			
		}
	}
        
        // Aqui ele retorna o vetor porém ja ordenado, caso fosse feito de forma direta ele não retornaria o valor ja revisado por todo o algoritmo Bubble Sort
		printf("Vetor ordendado: ");	
		for(i = 0; i < 5; i++){
			printf("%d ", vetor[i]);
		}
    
    return 0;
    }
