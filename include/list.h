#ifndef LIST_H
#define LIST_H

#include "cell.h"

/*===============  STRUCTURES  ===============*/

/**
 * @brief Liste qui contient des cellules.
 */
typedef struct list {
    cell *head;
}list;

/*===============  LISTE  ===============*/

/**
 * @brief Initialise une liste.
 * @return Renvoie la liste créée, NULL sinon.
 * @warning La liste doit être supprimée avec LIST_free(list*)
 */
list* LIST_init();

/**
 * @brief Ajoute un élément en tête de liste.
 * @param list : la liste dans laquelle on ajoute en tête.
 * @param value : la valeur ajoutée.
 */
void LIST_addHead(list *list, int value);

/**
 * @brief Supprime un élément d'une liste.
 * @param list : la liste dans laquelle je veux supprimer.
 * @param value : la valeur que je veux enlever de la liste.
 */
void LIST_delete(list *list, int value);

/**
 * @brief Affiche le contenu d'une liste.
 * @param list : la liste à afficher.
 */
void LIST_print(list *list);

/**
 * @brief Renvoie la taille de la liste.
 */
int LIST_getLenght(list *list);

/**
 * @brief Renvoie si une liste est vide ou non.
 * @return Renvoie 1 (True) si la liste est vide 0 (False) sinon. 
 */
int LIST_isEmpty(list *list);

/**
 * @brief Ajoute un élément en fin de liste.
 * @param list : la liste de base.
 * @param value : la valeur ajoutée.
 */
void LIST_addTail(list *list, int value);

/**
 * @brief Ajoute un élément à une place spécifique dans une liste.
 * @param list : la liste de base.
 * @param index : l'indice où on ajoute l'élément dans la liste.
 * @param value : la valeur ajoutée.
 * @warning Si l'indice est trop haut, l'élément est ajouté en fin de liste, s'il est trop bas il est ajouté au début.
 */
void LIST_addIndex(list *list, int index, int value);

/**
 * @brief Supprime un élément en tête de liste.
 */
void LIST_deleteHead(list *list);

/**
 * @brief Trouve un élément dans une liste.
 * @param list : la liste
 * @param value : la valeur recherchée.
 * @return Renvoie la cellule recherchée ou NULL si elle n'est pas trouvée.
 */
cell* LIST_findElement(list *list, int value);

/**
 * @brief Supprime et libére toute la mémoire d'une liste (cellules incluses).
 */
void LIST_free(list *list);

#endif 