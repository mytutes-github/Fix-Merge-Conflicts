int main()

{

	char in[90] = "My name inn India. I have been screwed a lot";
	int i; 		/* Index */	   
	char c;		/* Current Location of character*/	  
	int vc, cc;
	
	vc = cc = 0; 

	printf("\nEnter the Input String:");
	gets(in);

	for (i=0; in[i]; i++)
	{
		
		/*Get the character from current location*/
		c = in[i];
		
		
		/*Analyze if it is an Alphabet*/	
		if((c>='A' && c<='Z') || (c>='a' && c<='z'))
		{
			
			switch(c)
			{
			
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			
				vc++;
				break;
			
			default:
				cc++;
			}	 
			
			
		}
		
	}
	
	printf("\n String Analysis for Vowels & Consonents:");
	printf("\n Display Input String :%s", in);
	printf("\n Vowels Count			:%d", vc);
	printf("\n Consonents Count		:%d", cc);
}

