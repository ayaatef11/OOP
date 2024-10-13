![image](https://github.com/user-attachments/assets/1df5a7c2-9060-4230-9790-d2db9d842425)
#Car Rental System Class diagram
![image](https://github.com/user-attachments/assets/7926e796-8ffc-40f2-a5a3-430a508dcef3)
#Car Rental System Object diagram
![image](https://github.com/user-attachments/assets/76e07d1a-250c-4ec0-8854-2901d2ef3cb1)
Car rental system is a software that organizes all operations on car rental including
managing reservation operations , payment either to pay money in full or in installments.
It provides the user with information of the car he is going to renter including the place
where it made, the model of the car , the year when it was made , the id of the car and if it is
available to renter at this time or not.

A car can be rented several times but there musn't be overlapping as a customer can't renter
a car which is rented by another customer

A customer also can rent several times ,he can either rent the same car or another one but in
different times

The system then manages reservations of cars to employees
A tour around functions

*We will start with class Date:

Attributes:
Day,month ,Year are the main components of any date
Funcfions:
I overloaded the operator insertion and extraction in order to read data with the keyword
cin and display them with the key word cout
Also I overloaded the operator - in order to compute the period of renting the car
And the operators of comparison like >,<, == in order to compare between objects of the
date and see if there is overlapping or not
The operator - works like the following:
First it suptracts the years together and it is normal that the second year is greater than the
first one ,Next it subtracts months together and if the first one is less than the second one
it converts one year into 12 months and then do the usual subtraction
Third it subtracts days together and if the result is negative we convert one month into
30 day and do the usual subtraction
