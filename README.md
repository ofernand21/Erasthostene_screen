# Erastosthene_screen

Help you to have the first number

Le crible d’Eratosthène est un procédé qui permet d’obtenir les nombres premiers sans division, il se fait par élimination de multiple.
Si on se propose de déterminer les nombres premiers avant un entier positif N par exemple selon ce procédé, on commencera par éliminer 0 et 1 qui ne sont pas
premiers, puis on retient 2 qui est premier, on élimine par la suite tous les multiple de 2 qui ne seront plus premiers, puis on retient 3 comme premier, on élimine
aussi les multiples de 3 qui seront eux aussi pas premiers. Ensuite on retient le nombre suivant qui n’est pas éliminer qui sera pris comme premier puis on élimine
ses multiples. On continue ainsi le processus jusqu’à l’entier N de départ. 
Si on veut approximer le procédé en termes de programme on utilisera un tableau de booléen de taille N+1 (Supprime[N+1]) ensuite on utilisera une boucle pour, de i
allant de 0 à N dont tous les éléments du tableau on prendra la valeur booléenne Faux. Pour un certain i, si Supprime[i]=Faux alors cet élément ne sera pas
supprimé, donc on suppose au début que tous les nombres sont premiers. Ensuite on utilisera une deuxième boucle pour, de i allant de 2 à N ou si Supprime[i]=faux
alors on affiche cet indice i puis on supprime tous les multiples de cet i inférieur ou égal à N à l’aide d’une variable multiple qui prendra les multiples de i ou
Supprime[multiple]=vrai (c’est-à-dire que les indices multiples ne seront pas affichés), ainsi seul seront afficher les indices qui sont pas des multiples c’est
à-dire les nombres premiers. A la fin on aura tous les nombres premiers inferieurs ou égal à N

the compilation is: gcc Eratosthene.c -o exec
