#include "ft_printf.h"

int main ()
{
	int	x, a, b;
	
	x = 120;
	ft_printf("!% 31.24d!", 10);
	ft_printf("%5%");
	ft_printf("percent 2 %12%");
	ft_printf("%20.d", -1024);
	ft_printf("%20.i", -1024);
	ft_printf("%---105p%-%%--150.i" ,(void*)5854188174500153960lu,-1646567843);
	ft_printf("%197c%12p%013.i%--147.185x%-1c" ,7,(void*)18229185041105221837lu,-1488496170,703835510u,120);

	// a = ft_printf("1[%20.10s]\n", "hello");
	// b = printf("1[%20.10s]\n", "hello");
	// printf("a == %d b == %d\n", a, b);
	
	// a = ft_printf("2[%5.10s]\n", "hello");
	// b = printf("2[%5.10s]\n", "hello");
	// printf("a == %d b == %d\n", a, b);
	
	// a = ft_printf("3[%20.1s]\n", "hello");
	// b = printf("3[%20.1s]\n", "hello");
	// printf("a == %d b == %d\n", a, b);
	
	// a = ft_printf("4[%s]\n", "hello");
	// b = printf("4[%s]\n", "hello");
	// printf("a == %d b == %d\n", a, b);
	
	// a = ft_printf("5[%-10s]\n", "hello");
	// b = printf("5[%-10s]\n", "hello");
	// printf("a == %d b == %d\n", a, b);
	
	// a = ft_printf("6[%+s]\n", "hello");
	// b = printf("6[%+s]\n", "hello");
	// printf("a == %d b == %d\n", a, b);
	
	// a = ft_printf("7[%-#+ 25.12+-10.13s]\n", "hello");
	// b = printf("7[%-#+ 25.12+-10.13s]\n", "hello");
	// printf("a == %d b == %d\n", a, b);
	
	// a = ft_printf("1[%+p]\n", NULL);
	// b = printf("1[%+p]\n", NULL);
	// printf("a == %d b == %d\n", a, b);
	
	// a = ft_printf("1[%-03.10d]\n", 120);
	// b = printf("1[%-03.10d]\n", 120);
	// printf("a == %d b == %d\n", a, b);
	
	// a = ft_printf("2[%5.10d]\n", -120);
	// b = printf("2[%5.10d]\n", -120);
	// printf("a == %d b == %d\n", a, b);
	
	// a = ft_printf("3[%-0000   000+-+-1200+++-5154#0.###   # #0   00100+-++#d]\n",
	// 	10);
	// b = printf("3[%-0000   000+-+-1200+++-5154#0.###   # #0   00100+-++#d]\n",
	// 	10);
	// printf("a == %d b == %d\n", a, b);
	
	// a = ft_printf("4x[%-0000   000+-+-1200+++-5154#0.###   # #0   00100+-++#x]\n",
	// 	10);
	// b = printf("4x[%-0000   000+-+-1200+++-5154#0.###   # #0   00100+-++#x]\n",
	// 	10);
	// printf("a == %d b == %d\n", a, b);
	
	// a = ft_printf("4X[%-0000   000+-+-1200+++-5154#0.###   # #0   00100+-++#X]\n",
	// 	10);
	// b = printf("4X[%-0000   000+-+-1200+++-5154#0.###   # #0   00100+-++#X]\n",
	// 	10);
	// printf("a == %d b == %d\n", a, b);
	
	// a = ft_printf("4[%d]\n", 1111111111111);
	// b = printf("4[%d]\n", 1111111111111);
	// printf("a == %d b == %d\n", a, b);
	
	// a = ft_printf("5[%-10X]\n", 021);
	// b = printf("5[%-10X]\n", 021);
	// printf("a == %d b == %d\n", a, b);
	
	// a = ft_printf("6[%+X]\n", 14526);
	// b = printf("6[%+X]\n", 14526);
	// printf("a == %d b == %d\n", a, b);
	
	// a = ft_printf("7[%-#+ 25.12+-10.13d]\n",11111202);
	// b = printf("7[%-#+ 25.12+-10.13d]\n", 11111202);
	// printf("a == %d b == %d\n", a, b);
	
	// a = ft_printf("[%#-010s] -- [%#010c] -- [%010%] -- [%010d] -- [%10p]\n", "abcd",
	// 	'a', 120, NULL);
	// b = printf("[%#-010s] -- [%#010c] -- [%010%] -- [%010d] -- [%10p]\n", "abcd",
	// 	'a', 120, NULL);
	// printf("a == %d b == %d\n", a, b);

	// a = ft_printf("dfgshjklamnbhguijkhgikjnbgyujnbaguiknbgyikjhy78ikjhyijhgijhyoijkhjghyujb%sksnjskhnnsh%dsbhhsvhkl%x\n", "hello", 120, 4518215);
	// b = printf("dfgshjklamnbhguijkhgikjnbgyujnbaguiknbgyikjhy78ikjhyijhgijhyoijkhjghyujb%sksnjskhnnsh%dsbhhsvhkl%x\n", "hello", 120, 4518215);
	// printf("a == %d b == %d\n", a, b);
	// printf("a == %d b == %d\n", a, b);
	
	// a = printf("%");
	// b = ft_printf("%");
	// printf("a == %d b == %d\n", a, b);
	
	// a = ft_printf("[%#010c]\n", 'a');
	// b = printf("[%#010c]\n",'a');
	// printf("a == %d b == %d\n", a, b);
	
	// a = ft_printf("[%010%]\n");
	// b = printf("[%010%]\n");
	// printf("a == %d b == %d\n", a, b);

	// a = ft_printf("[%-1d]\n", 0);
	// b = printf("[%-1d]\n", 0);
	// printf("a == %d b == %d\n", a, b);

	// a = ft_printf("[%-d]\n", 0);
	// b = printf("[%-d]\n", 0);
	// printf("a == %d b == %d\n", a, b);

	// a = ft_printf("[%-10d]\n", 0);
	// b = printf("[%-10d]\n", 0);
	// printf("a == %d b == %d\n", a, b);

	// a = ft_printf("[%-1.10d]\n", 0);
	// b = printf("[%-1.10d]\n", 0);
	// printf("a == %d b == %d\n", a, b);

	// a = ft_printf("[%-10.1d]\n", 0);
	// b = printf("[%-10.1d]\n", 0);
	// printf("a == %d b == %d\n", a, b);

	
    // a = ft_printf("[%u]\n", 2147483648);
	// b = printf("[%u]\n", 2147483648);
	// printf("a == %d b == %d\n", a, b);

    // a = ft_printf("[%10c]\n", 'a');
	// b = printf("[%10c]\n", 'a');
	// printf("a == %d b == %d\n", a, b);

    // a = ft_printf("[%010i]\n", 800);
	// b = printf("[%010.10i]\n", 800);
	// printf("a == %d b == %d\n", a, b);

    // a = ft_printf("[%020p]\n", &x);
	// b = printf("[%020p]\n", &x);
	// printf("a == %d b == %d\n", a, b);

    //  a = ft_printf("[%020.10p]\n", &x);
	// b = printf("[%020.10p]\n", &x);
	// printf("a == %d b == %d\n", a, b);

    // a = ft_printf("[% i]\n", 0);
	// b = printf("[% i]\n", 0);
	// printf("a == %d b == %d\n", a, b);

    // a = ft_printf("[%+ i]\n", -10);
	// b = printf("[%+ i]\n", -10);
	// printf("a == %d b == %d\n", a, b);

    // a = ft_printf("[%+ x]\n", 120);
	// b = printf("[%+ x]\n", 120);
	// printf("a == %d b == %d\n", a, b);

    // a = ft_printf("[%+ p]\n", &x);
	// b = printf("[%+ p]\n", &x);
	// printf("a == %d b == %d\n", a, b);

    //  a = ft_printf("[%+ d]\n", 10);
	// b = printf("[%+ d]\n", 10);
	// printf("a == %d b == %d\n", a, b);

    // a = ft_printf("[%+ i]\n", -10);
	// b = printf("[%+ i]\n", -10);
	// printf("a == %d b == %d\n", a, b);

    // a = ft_printf("[%+ c]\n", 'a');
	// b = printf("[%+ c]\n", 'a');
	// printf("a == %d b == %d\n", a, b);

    // a = ft_printf("[%+ s]\n", "hello");
	// b = printf("[%+ s]\n", "hello");
	// printf("a == %d b == %d\n", a, b);






	// a = ft_printf("[%-.d]\n", 0);
	// b = printf("[%-.d]\n", 0);
	// printf("a == %d b == %d\n", a, b);


    // a = ft_printf("[% #+-03.0x]\n", 0);
    // b = printf("[% #+-03.0x]\n", 0);
    // printf("a == %d b == %d\n", a, b);

	// a = ft_printf("[%3.10x]\n", 0);
    // b = printf("[%3.10x]\n", 0);
    // printf("a == %d b == %d\n", a, b);

	// a = ft_printf("[%3.0x]\n", 10);
    // b = printf("[%3.0x]\n", 10);
    // printf("a == %d b == %d\n", a, b);


	// a = ft_printf("[%20d]\n", -42000);
	// b = printf("[%20d]\n", -42000);
	// printf("a == %d b == %d\n", a, b);








	// char *format = "kkkkk\n";
	// /*[-] [+] [ ] [0] [10] [.]*/
	// int f = -2;
	// a = ft_printf(format);
	// b = printf(format);
	// printf("a == %d b == %d\n", a, b);

	//printf("00000000000000000000000000000000000\n");
	//printf("              hello wrold welcome nice worlkd\n");
	//write(1,"\nok",3);
}


