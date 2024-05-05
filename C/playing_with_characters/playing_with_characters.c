#include<stdio.h> 

int main()

{    

    char ch;
    scanf("%c",&ch);
    printf("%c\n",ch);
    
    char str[50]; 

    scanf("/n");
    scanf("%s",str); 
    printf("%s\n",str); 

    char sen[100];
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%s\n",sen);
  

    return 0; 
}

