#include "Fast_Windows_Console.h"
#pragma warning(disable:4996)
int main()
{
	
	FWC::init();
	
	for (;;)
	{
		FWC::clear();
	
		FWC::update_Input();

		if (FWC::key_State('A'))
		{
			FWC::put(10, 10, 'A');
		
		}
		
		FWC::present();
	}

	return 0;
}