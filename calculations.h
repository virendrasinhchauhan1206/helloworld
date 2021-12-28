int calc(int x, int y, char ops)
{
	switch(ops)
	{
		case '+':
			return x+y;
		case '-':
			return x-y;
		case '*':
			return x*y;
		case '/':
			return x/y;
		default:
		printf("Bakwas mat kar: \n");
	}
	return 999999;
}
