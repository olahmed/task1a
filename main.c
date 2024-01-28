/**
 ******************************************************************************
 * @file           : Application.c
 * @author         : ola ahmed
 * @brief          : Contains the functionality of my application
 ******************************************************************************
 */

/* ********************** Includes Section Start ********************** */
    #include <stdio.h>
    #include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ******************* Global Variables Section Start ************** */

/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Decleration Section Start ************* */

/* ********************** Global Decleration  Section End   ************ */

/* ********************** Sub-Program Declerations Section Start ******* */

/* ********************** Sub-Program Declerations Section End ******* */

/* ********************** Sub-Program Section Start ************* */
   int main()
{
   int   temp_f ;
   float temp_c ;
   float temp_k ;
   printf("Enter the temperature in Fahrenheit  ");
   scanf("%i", &temp_f);
   temp_c=(float)(temp_f-32)*5/9;
   printf("Enter the temperature in Celsius is %0.3f C\n",temp_c);
   temp_k=temp_c+273.15;
   printf("Enter the temperature in Kelvin is %0.3f K\n",temp_k);
   return 0;
}
/* ********************** Sub-Program Section End ************* */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      28jan2024            first task a
*/
