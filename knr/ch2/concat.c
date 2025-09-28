#include <stdio.h>
#define LIMIT 100

void strcon(char s[],char t[]);
int ge_line(char s[],int lim);

int main()
{
    int length_s;
    int length_t;

    char s[LIMIT];
    char t[LIMIT];

    while ((length_s = ge_line(s,LIMIT)) > 0 && (length_t = ge_line(t,LIMIT)) > 0 )
    {
        printf("String1:%s\n",s);
        printf("String2:%s\n",t);
        strcon(s,t); 

    
    }
}

int ge_line(char s[],int lim)
{
    int c;
    int i ;
  for ( i = 0; i < lim -2 && (c = getchar()) != EOF && c != '\n'; i++)  
  {
    s[i] = c;

  }

  if (c == '\n')
  {
        s[i] = c;
        i++;
  }  
  s[i] = '\0';
  
  return i;

   
    }

    void strcon(char s[], char t[])
    {
        int i,j;
        i = j = 0;

        for (;s[i] != '\n'; i++);

        while  ( (s[i++] = t[j++]) != '\0' );
        printf("Concatenated string:%s\n",s);
             
    }
    
    

