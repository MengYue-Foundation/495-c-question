typedef int (*func_t)();

typedef func_t (*ptrfunc_t)(); //这是一个函数指针, 它的返回类型是func_t

int sgy()
{
   printf("sgy\n");
   return 0;
}

func_t sgy1()
{
   printf("sgy1\n");
   return sgy;
}

int  main(int argc , char *argv[]){

   func_t sgy2;
   ptrfunc_t stat = sgy1;//sgy1的返回值也是一个函数指针, 指向的这个函数(返回值是int, 且无形参)
   sgy1();
   sgy2 = stat();
   sgy2();
}


