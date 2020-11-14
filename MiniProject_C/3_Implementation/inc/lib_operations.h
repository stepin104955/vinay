
#ifndef __LIB_OPERATIONS_H__
#define __LIB_OPERATIONS_H__


#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

/**
*  adds the visits of new people in operand2 to previous people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int Addbook(int operand1, int operand2);

/**
*  adds the positive tested of new people in operand2 to previously positived tested people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int Searchbook(int operand1, int operand2);

/**
*  subtracts the negative tested of new people in operand2 to previously visited people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int Displaybook(int operand1, int operand2);

/**
*  adds the new deaths in operand2 to previously died people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int Author(int operand1, int operand2);

/**
*  adds the newly recovered  people in operand2 to previously recovered people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int Titlelist(int operand1, int operand2);

/**
*  adds the home quarantined of new people in operand2 to previously home quarantined people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int Stock(int operand1, int operand2);

/**
*  adds the revisted positive tested of new people after one visit in operand2 to previously revisited and positived tested people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int Issue(int operand1, int operand2);

/**
*  subtracts the revisted negative tested of new people after one visit in operand2 to previously revisited and negative tested people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int bookret(int operand1, int operand2);

/**
*  adds the hospital quarantined of new people in operand2 to previously hospital quarantined people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int Addmembr(int operand1, int operand2);

/**
*  adds the new people who have completed isolation in operand2 to previously completed isolation people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/

int Exit(int operand1, int operand2);

#endif  /* #define __LIB_OPERATIONS_H__ */
