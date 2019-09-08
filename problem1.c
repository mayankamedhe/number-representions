#include <math.h>
#include <stdio.h>
#include <stdlib.h>
# define MAX_INPUT 100
 
int bit_return(int a, int loc)   
{
    int buf = a & 1<<loc;

    if (buf == 0) return 0;
    else return 1; 
}


void usage(char *progname) {
    fprintf(stderr, "Usage: %s real-number\n", progname);
    exit(EXIT_FAILURE);
}


int main()
{

    while(1)
    {
        char value[MAX_INPUT] = "";
        float temp;
        int n;
        char str[MAX_INPUT] = "";
        float val = 1e-12;
     
        fgets(value, 100, stdin); 
     
        if (sscanf(value, "%f", &temp) == 1) 
        {
            n = (int)temp;
            if (fabs(temp - n) / temp > val) 
            {
                printf("The input is a floating point- %f\n", temp); 

                int *n_int;
                n_int = &temp;

                for (int i = 31; i >= 0; i--)
                {
                    printf("%d", bit_return(*n_int, i));
                }
                printf("\n");
            }       
            else
            {
                printf("The input is an integer\n");
                int *n_int;
                n_int = &n;
                for (int i = 31; i >= 0; i--)
                {   
                    printf("%d",bit_return(*n_int, i));    
                }  
                printf("\n");  
            }      
        }
     
        else if (sscanf(value, "%s", str) == 1) 
        {    
            if(str[0] == 'E' && str[1] == 'N' && str[2] == 'D')
            {
                printf("ending...\n");
                break;
            }
        }
         
        else     
            printf("input not recognized\n");  
    }  
}