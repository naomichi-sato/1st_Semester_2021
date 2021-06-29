
#include "Common.h"
#include "Unit.h"

int main( void )
{
	srand( (unsigned) time(NULL) );
	Unit nanashi;
	nanashi.InitRandomStatus();

	system("pause");
	return 0;
}

