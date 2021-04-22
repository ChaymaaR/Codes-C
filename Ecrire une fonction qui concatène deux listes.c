struct Page* Concatenation_2Listes(struct Page *debut1,struct Page
*debut2)
{
struct Page *tmp;
tmp=debut1;
while(debut1->suivant != NULL)
{
debut1 = debut1->suivant;
}
debut1->suivant=debut2;
return (tmp);
}

/* Et l’appel à la fonction : */ 

int main(void)
{
//appel de la fonction lire pour créer la liste
lire();
//appel de la fonction afficher pour afficher les valeurs du champ val de la liste
afficher(premier);
//appel de la fonction lire_carre pour créer la deuxième liste
lire_carre(premier);
//appel de la fonction Concatenation_2Listes
liste2=Concatenation_2Listes(premier,premier2);
afficher(liste2);
}