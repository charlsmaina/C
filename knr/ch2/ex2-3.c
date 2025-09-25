

/*
Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal digits
(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
through 9, a through f, and A through F.   


pseudocode:
 to convert to decimal or integer: = number at position 0 * 16 ^ 0 + number at position 1 * 16^1 + ...until we get to x
 . So to get each position we must take the number and strip off the 0x or 0X so as to process it well: 

*/

#include <stdio.h>
#define LIMIT 6

enum  boolean {NO,YES};
int inhex ;


int _16raise(int n);


int main()
{
    int htoi(char hx[]);
    char hx[LIMIT];

    hx [0] = '0';
    hx [1] = 'x';
    hx [2] = '0';
    hx [3] = '0';
    hx [4] = '0';
    hx [5] = 'F';
  

    int htoi(char hx[]);
    

    {
        int vhex;
        int digit;
        int i = 0;
         
        

        if (hx[i] == '0')
        i++;

        if (hx[i] == 'x' || hx[i] == 'X')
        i++;

        inhex = YES;
        int n = 0;

       

        while (inhex == YES)
        {
            if (hx[i] >= '0' && hx[i] <= '9')
            {
                digit = hx[i] - '0';
                i++;
            }
           else if (hx[i] >= 'a' && hx[i] <= 'z')
            {
                digit = hx[i] - 'a';
                i++;
            }
           else if (hx[i] >= 'A' && hx[i] <= 'Z')
            {
                digit = hx[i] - 'A';
                i++;
            }
            else
             inhex = NO;

             if (inhex == YES)
             {
                vhex = vhex + _16raise(n) * digit;
                n++;
             }   
           
        } 
        return vhex;  
}



printf("The decimal equivalent is :%d\n",htoi(hx));

}



int _16raise(int n)
{
    int i;
    i = 0;
    int result;
    result = 0;
    while (i <= n)
    {
        if (i = 0)
        {
            result = 1;
            i++;
        }
        else
        {
             result = result * 16 ;
             i++;
        }
        
      
    }
    return result;
    
}