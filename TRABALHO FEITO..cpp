#include<stdio.h>
int main(void){
	FILE *file;
	int alunos,x;
    float n1,n2,media;
    char nome [30];
	 file= fopen("C:\\Users\\Guilherme\\Desktop\\notas.txt","w");
	if(file == NULL){
		printf("esse arquivo nao pode ser aberto\n");
		
		return 0;
	}
	
	 printf("digite a quantidade de alunos : ");
    scanf("%i", &alunos);
    for(x=0;x<alunos;x++)
    {
    	
   	printf("digite seu nome : \n");
	scanf("%s", nome);
	fprintf(file,"Nome : %s\n",nome);
    printf("digite a primeira nota : ");
    scanf("%f", &n1);
    printf("digite a segunda nota : ");
    scanf("%f", &n2);
    media=(n1+n2)/2;
	printf("a media e de %0.1f",media);
    printf("\n");
   fprintf(file,"media : %0.1f\n",media);
}

	
	fclose(file);
	
	 
	return 0;
	
	
}
