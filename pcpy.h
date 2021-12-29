#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<sya/wait.h>

int block(const char*srcfile, int pronum);
int procreate(const char* srcfile,const char* desfile,int pronum, int blocksize);
int check_arg(const char*srcfile,int argc_num,int pronum);