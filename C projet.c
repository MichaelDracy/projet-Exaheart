#include<stdlib.h>
#include<stdio.h>
#include <iostream>
using namespace std;

//algorithme de tri rapide
int partition(int tableau[nbr_case], int deb, int fin)
    {
    int compt=deb;
    int pivot=tableau[deb];
    int i;

    for(i=deb+1;i<=fin;i++)
        {
        if(tableau[i]<pivot)
            {
            compt++;
            echanger(tableau,compt,i);
            }
        }
    echanger(tableau,compt,deb);
    return(compt);
    }

void tri_rapide_bis(int tableau[],int debut,int fin)
    {
    if(debut<fin)
        {
        int pivot=partition(tableau,debut,fin);
        tri_rapide_bis(tableau,debut,pivot-1);
        tri_rapide_bis(tableau,pivot+1,fin);
        }
    }

void tri_rapide(int tableau[],int longueur)
     {
     tri_rapide_bis(tableau,0,longueur-1);
     }
     return 0;
     }


//Algorithme de recherche dicotomique

  int val, nbVal;
  bool trouve, depasse;

  int tab[10] = {12, 14, 20, 25, 26, 28, 35, 99};  //tableau d'entiers trié par ordre croissant
  nbVal = 8;  //nombre de valeurs stockées dans le tableau

  cout << "Entrez la valeur que vous voulez rechercher dans le tableau." << endl;
  cin >> val;

  int i=0;
  trouve=false;
  depasse = false;

  while(i<nbVal && !(trouve || depasse)){  //on s'arrête si on trouve ou si on dépasse (car ordre croissant donc si on n'a pas trouvé avant, on ne trouvera pas après)
    trouve = (tab[i] == val);
    depasse = (tab[i] > val);
    i++;
  }

  if(trouve) cout << "La valeur est bien dans le tableau à l'indice : " << i << endl;
  else cout << "La valeur n'est pas dans le tableau" << endl;

  return 0;
}
