#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

int* M = NULL;
int i;
int t, a, b;
int j;
int n; n = 1;


    printf("[infos] >: INITIALISATION______________________\n");
    printf("[infos] >: Triage de tableau___________________\n");
    printf("[infos] >: I est la l'intervale de nbr aleaoire \n");
    printf("[infos] >: Entrez la taille du tableau : ");

    scanf("%d", &n);
    M = malloc(n *sizeof(int));
    printf("[infos] >: Entrez la 1ere Val de I : [ * , * ] >: ");
    scanf("%d", &a);
    printf("[infos] >: Entrez la 2e Val de I : [ %d , * ] >: ", a);
    scanf("%d", &b);
    printf("[infos] >: L'intervalle I : [ %d , %d ] >: ", a, b);
    for(i = 0; i < n; i++){
        M[i] = rand() % (b-a) + a;
        printf("\nValeur de M[%d] >: %d", i, M[i]);

        }
    printf("\n[infos] >: Computing....\n");
    for(i = n-1; i >= 1; i--){
        for(j=0; j < i; j++){
            if(M[j] > M[j+1]){
            t = M[j];
            M[j] = M[j+1];
            M[j+1] = t;
            }
        }
    }
    printf("\n[infos] >: Tableau trié\n");
    printf("[ ");
    for(i = 0; i < n; i++){
        printf("%d ", M[i]);
        }
    printf("]");
    return 0;
}
