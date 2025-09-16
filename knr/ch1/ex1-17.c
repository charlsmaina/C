//Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.
//pseudo code
/*
        1. Have a function to read lines into an array. That function should return the length of that line
        2. Check whether the line exceeds the 80 char condition
        3. If yes copy that line together with the new line in the g80s array
        4, Append all lines here that are greater than 80 and then print them based on the newline....or you can append a "\0" and use %s

        #problems
        1. Am storing all lines greater than 80 in a single array. I have to ensure consistency of indexes...i should ensure that i take over from where i left:
        2. To make it easier... append '\0' at the end for easier printing


        # workable solution
        -remove the copy functio and instead use a logic that apppends the line as long as len >= 0,all this time increment total len: and use total len as the new index

*/

#include <stdio.h>
#define LIMIT 1000//limit of charcters in an array

int linesget(char lines[],int lim); // function defination  - read a line and return its length


int main()
{
    char lines[LIMIT];// an array to store a line as its read
    char g80[LIMIT];//array for storing lines greater than 80 chars
    
    int len, i ;
    len =  0;
    int total_len;
    total_len = 0;
    
    
    while ((len = linesget(lines,LIMIT)) > 0) // read a line and get its length
    {
        if (len > 10) // filter lines of a specific length {I used 10 for ease of testing : the question asks for filtering of lines greater thn 80 chars}
        {
              for ( i = 0; i < len; i++)
        {
            if (total_len < LIMIT - 1)//limit -2 since limit -1 is reserved for \0
            {
                g80[total_len] = lines[i] ;
                total_len ++;
            }
            
           
           
        }
    } 
        }  
        
  
    g80[total_len] = '\0';

    printf("%s\n",g80); 
   
}

int linesget(char lines[],int lim)
{
    int c;
    int i;
    i = 0 ;
    while ((c = getchar()) != EOF && c != '\n' && i < lim -2)
    {
        lines[i] = c ;
        i++ ;

    }
    if (c == '\n')
    {
        lines[i] = c;
        i++;
    }
    return i;
  
}

/*
THE MAIN TAKE AWAYS FROM THIS EXERCISE:
    - Function defination - You have to make sure you defination does not coincide with the C reserved keywords. Ealier i had used getline as the function name for the function to read the lines and it took time before i realized what the error meant. Sometimes it takes times to interpret the error messages especilly for beginners.
    
    - Passing arrays as arguments to functions - You pass the array name
    - Array indexing is very crucial 





*/