#include <stdio.h>
#include <math.h>
#include <string.h>
void my_array_func(char ca[10])
{
    printf("%d\n", sizeof(ca));
    
}

void my_pointer_func(char *pa)
{
    printf("%d\n", sizeof(pa));
}

int main()
{
	char ga[] = "abcdefghijklm";
	char s[105];
	printf("#include <stdio.h>\n");
	printf("\n");
	printf("char ga[] = \"abcdefghijklm\";\n");
	printf("\n");
	printf("void my_array_func(char ca[10])\n");
	printf("{\n");
	printf("    printf(\" addr of array param = %%#x \\n\", ca);\n");
	printf("    printf(\" addr (ca[0]) = %%#x \\n\", &(ca[0]));\n");
	printf("    printf(\" addr (ca[1]) = %%#x \\n\", &(ca[1]));\n");
	printf("    printf(\" ++ca = %%#x \\n\\n\", ++ca);\n");
	printf("}\n");
	printf("\n");
	printf("void my_pointer_func(char *pa)\n");
	printf("{\n");
	printf("    printf(\" addr of ptr param = %%#x \\n\", pa);\n");
	printf("    printf(\" addr (pa[0]) = %%#x \\n\", &(pa[0]));\n");
	printf("    printf(\" addr (pa[1]) = %%#x \\n\", &(pa[1]));\n");
	printf("    printf(\" ++pa = %%#x \\n\", ++pa);\n");
	printf("}\n");
	printf("\n");
	printf("int main()\n");
	printf("{\n");
	printf("    printf(\" addr of global array = %%#x \\n\", &ga);\n");
	printf("    printf(\" addr (ga[0]) = %%#x \\n\", &(ga[0]));\n");
	printf("    printf(\" addr (ga[1]) = %%#x \\n\\n\", &(ga[1]));\n");
	printf("    my_array_func(ga);\n");
	printf("    my_pointer_func(ga);\n");
	printf("    return 0;\n");
	printf("}\n\n");
	scanf("%s",&s);
	printf("%d\n8\n8\n",strlen(s)+1);
 	return 0;
}


