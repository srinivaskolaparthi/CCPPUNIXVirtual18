#include<stdio.h>

int main() {
    struct abc
    {
    int srini;
    };
 struct srini {
      int a;
    char fl;
    struct abc out;
 };
 struct srini ss;
 ss.out.srini=900000;
 ss.a=90;
 ss.fl='p';
   printf("%d %d",sizeof(ss.a),sizeof(ss.fl));
   printf("%d\n",sizeof(ss));
   printf("%d",ss.out.srini);
}
