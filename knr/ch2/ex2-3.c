

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

enum  boolean {NO,YES};//{1,0}

int _16raise(int n);//for raising 16 to the position n


int main()
{
    int htoi(char hx[]);

    char hx[LIMIT];

    hx [0] = '0';
    hx [1] = 'x';
    hx [2] = '0';
    hx [3] = '0';
    hx [4] = '0';
    hx [5] = 'A';



printf("The decimal equivalent is :%d\n",htoi(hx));

}

  int htoi(char hx[])
    

    {
        int inhex ;//A yes or no flag
        int vhex;// gets the decimal equivalnt of the hexadecimal number..ie 0xFFFF

        int digit;//gets the decimal equivalent of a hexadecimal digit...ie F = 15
        int i = 0;//Index i is for the most left digit

        vhex = 0;
         
        
        if (hx[i] == '0')
       {
        i++;

        if (hx[i] == 'x' || hx[i] == 'X')
        {
             i++;

        inhex = YES;
        }
       
       } 

        int n = 3;//During conversion position starts at zero. So forth position is equivalent to third

        while (inhex == YES)
        {
            if (hx[i] >= '0' && hx[i] <= '9')//digits
            {
                digit = hx[i] - '0';
                i++;
            }
           else if (hx[i] >= 'a' && hx[i] <= 'z')//A to
            {
                digit = hx[i] - 'a' + 10;
                i++;
            }
           else if (hx[i] >= 'A' && hx[i] <= 'Z')
            {
                digit = hx[i] - 'A' + 10;
                i++;
            }
            else
             inhex = NO;


             if (inhex == YES)
             {
                vhex = vhex + _16raise(n) * digit;
                n--;
             }   
           
        } 
        return vhex;  
}




int _16raise(int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
        result = result * 16;
    
    return result;
    
}