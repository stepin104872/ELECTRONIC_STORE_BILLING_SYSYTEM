/**
*@file esb.h
*esb application with 3 operations
*
*/
#ifndef ELECTRONICSTOREBILLING_H_
#define ELECTRONICSTOREBILLING_H_

#include<stdio.h>
#include<time.h>
#include<string.h>



/**
*  verifies the user and returns existing user
* @param[in] username
* @param[in] password

* @return Result returns login  Successfull
*/
int login();





/**
* calculates the total amount by multiplying the item quantity and item price per unit
*/
int calculation();

/**
* displays the actual bill format with all the calculations and with displaying customers details along with the cashier name including date and time.
*/
int bill();
#endif // ESB_H_INCLUDED


