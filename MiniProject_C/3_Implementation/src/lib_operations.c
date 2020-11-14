#include <lib_operations.h>


int Addbook0(int operand1, int operand2)
{
    return operand1 + operand2;
}

/*int Searchbook(int operand1, int operand2)
{
    return operand1 + operand2;
}

int Displaybook(int operand1, int operand2)
{
    return operand1 - operand2;
}

int Author(int operand1, int operand2)
{
    return operand1 + operand2;
}

int Titlelist(int operand1, int operand2)
{
    return operand1 - operand2;
}

int Stock(int operand1, int operand2)
{
    return operand1 + operand2;
}

int Issue(int operand1, int operand2)
{
    return operand1 + operand2;
}

int bookret(int operand1, int operand2)
{
    return operand1 - operand2;
}

int Addmembr(int operand1, int operand2)
{
    return operand1 + operand2;
}*/

int Exit1(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return (operand1 / operand2)*100 ;
    
    
}
