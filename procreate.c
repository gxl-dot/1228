#include"pcpy.h"

int procreate(const char* srcfile, const char*desfile,int pronum,int blocksize)
{
  int pos;
  char cblock[10];
  char cpos[10];
  bzero(cblock,sizeof(cblock));
  bzero(cpos,sizeof(cpos));
  pid_t pid;
  int flag;
  for(flag=0;flag<pronum;flag++)
  {
    pid=fork();
    if(pid==0)
    {
      break;
     }
  } 
  if(pid>0)
 {
   printf("father pid=%d 非阻塞回收..\"getpid());
  pid_t zpid;
  while((zpid=waitpid(-1,NULL,WNOHANG))!=-1)
  {
    if(zpid>0)
    {
      printf("father waitpid success:spid=%d\n",zpid);
    }
  }
}else if(pid==0){
 pos=flag*blocksize;
sprintf(cblock,"%d",blocksize);
 sprintf(cpos,"%d",pos);
  execl("colin/0322wanban/1228/COPY","./COPY",srcfile,desfile,cblock,cpos,NULL);
 }else{
 perror("fork fail:");
 exit(-1);
}
return 0;
}