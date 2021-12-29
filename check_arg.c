 #include"pcpy.c"
int check_arg(const char*srcfile,int argc_num,int pronum)
{
  if((access(srcfile,F_OK))!=0)
  {
     perror("check_arg error:");
     exit(-1);
   }
   if(argc_num<3)
  {
    printf("check_arg error :参数数量不符\n");
    exit(-1);
   }
   if(pronum<=0||pronum>=100)
   {
     printf("check_arg error :进程数量不符\n");
     exit(-1);
    }
  return 0;
}

