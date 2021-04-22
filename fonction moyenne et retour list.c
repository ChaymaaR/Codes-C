/* FONCTION MOYENNE LISTE :*/
float moyenne(struct Page *debut) 
{ int somme=0,j=1; 
while(debut != NULL) 
{ somme+=debut->val; 
debut = debut->suivant; 
j++; } 
puts ("Voici la Moyenne:%.2f\n",float(somme)/(j-1));
}

/* APPEL A LA FONCTION : */
int main(void)
{ lire(); 
afficher(premier); 
moyenne(premier); }

/* RETOURNER LA LISTE AU CARRE :
 valeurs de la première liste */
void lire_carre(struct Page *debut) 
{ struct Page *precedent, *nouveau; 
debut->val 
premier2 = ( struct Page * )malloc(sizeof(struct Page)); 
premier2->val=(debut->val)*(debut->val); 
precedent = premier2; 
debut=debut->suivant; 
while (debut!=NULL) 
{ debut->val 
nouveau = ( struct Page * )malloc(sizeof(struct Page)); 
precedent->suivant = nouveau; 
precedent = nouveau; 
nouveau->val=(debut->val)*(debut->val); 
debut=debut->suivant; } 
precedent->suivant = NULL; }

/* APPEL A LA FONCTION : */
int main(void)
{ lire(); 
afficher(premier); 
lire_carre(premier); 
afficher(premier2);
}
