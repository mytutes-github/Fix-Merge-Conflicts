int main()
{
	int opt;
	
	printf("\nEnter the Value (1 - 3):\t");
	scanf("%d", &opt);
	
	
	switch(opt)
	{
	
		case 1:
			printf("\nHot");
			break;
		
		case 2:
			printf("\nLuke Warm");
			break;
			
		case 3:
			printf("\nCold");
			break;
		
		default:
			printf("\nOut of Range");	 
	
	
	}
}

