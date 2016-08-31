


int matrix[5][5];
int i, j;

for (int i = 0; i < 5; ++i)
{
	for (int i = 0; i < 5; ++i)
	{
		if (i==j) matrix[i][j]=0;

		else if (i>j)matrix[i] [j]= -1;
		else matrix[i][j] =1;
	}
for (int i = 0; i <5; ++i)
{
	for (int i = 0; i < 5; ++i)
	{
		cout << matrix[i][j] << "\t";
		cout << "\n";
	}

	getch();
	return 0;
}



}

