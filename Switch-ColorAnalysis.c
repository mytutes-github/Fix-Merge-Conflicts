int main()
{

	char color;

	printf("\nEnter the color character (R/G/B): ");
	color=getchar();

	switch(color)
	{
	
		case 'r' :
		case 'R' :
		
			printf("\nRED");
			break;
			
		case 'g' :
		case 'G' :
			printf("\nGreen");
			break;
			
		case 'b' :
		case 'B' :
			printf("\nBlue");
			
		default:
			printf("\nBlack");	  
	}


}

