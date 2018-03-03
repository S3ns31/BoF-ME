// ConsoleApplication1.cpp : Defines the entry point for the console application.
//


#include <stdio.h>
#include <string.h>

using namespace std;

int hidden() {
	system("cmd");
	return 0;
}
void func(char *A) {
	
	printf(A);
	return;
}

int main()
{
    
	char overflow[25];
	char junk[1024] = { overflow[25] };
 cin >> overflow;
	if(0) {
		hidden();
	}else
	func(overflow);
	
	return 0;
	
}



