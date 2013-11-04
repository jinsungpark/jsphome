#include <stdio.h>
#include <string.h>
int main(int argc,char * argv[],char * envp[])
{
int inum=0;
int i=0;

if((argc==2) && strcmp(argv[1],"\n")==0)
inum=1;

for(i=0; envp[i] !=NULL ; ++i)
if(inum)
printf("%s \n",envp[i]);

return 0;
}
