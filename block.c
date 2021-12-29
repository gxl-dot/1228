#include"pcpy.h"

int block(const char* srcfile,int pronum)
{
   int sfilesize;
   int sfd=open(srcfile,O_RDONLY);
    sfilesize=lseek(sfd,0,SEEK_END);
    if(sfilesize%pronum==0)
    return sfilesize/pronum;
    else
     return sfilesize/pronum +1;
}