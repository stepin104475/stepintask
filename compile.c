
#include <stdio.h>
#include<string.h>

int main()

{
    int i,a;
   char s[]={"my_name_is_edcast_future_skills"};
    a=sizeof(s);
     char t[a];
    strcpy(t,strtok(s,"_"));
       printf("%s\n",t);
       while(s!='\0')
       {
          strcpy(t,strtok('\0',"_"));
         printf("%s\n",t);
       }
    return 0;
}
