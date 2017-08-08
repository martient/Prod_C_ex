#include <stdio.h>

#define VALEUR 5 //Systeme de valeur config et placable a l'infini

int main ()
{
    printf ("Valeurs par default: %d. \n", VALEUR);
    printf ("et %d est bien la valeur. \n", VALEUR);
    printf("Ce n'est pas %d \n", VALEUR+1);
    printf("Ni %d \n", VALEUR-1);
    printf("Mais bien %d \n", VALEUR);
    return (0);
}
