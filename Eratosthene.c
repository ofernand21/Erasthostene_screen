#include <stdio.h>
#include <stdbool.h>

int main()
{
unsigned int N,i;
printf("Entrer la valeur dont vous voulez les nombres premiers le precedant:");
scanf("%u",&N);
bool Supprime[N];
for(i=1; i<=N;i++)
{
    Supprime[i]=false;  // Je suppose qu'aucune valeure n'est multiple
}
for(i=2; i<=N; i++)
{
    if(Supprime[i]==false)
    {
        printf("%10d",i);
        int multiple=i;
        while(multiple<=N)
        {
            Supprime[multiple]=true; // Je supprime les multiples des nombres premiers
            multiple+=i;
        }
    }
}
printf("\n\n"); // Je reviens à la ligne pour separer du terminal
}
