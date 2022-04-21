/**
  * *_strcat - function that concatenates two strings.
  *
  * @dest: pointer to destination input
  * @src: pointer to resource input
  *
  * Return: pointer to resulting string @dest
  */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;

	/*find the size of dest array*/
	while (dest[x])
	{
		x++;
	}

	/*iterate through each src array value without the null byte*/
	for (y = 0; src[y]; y++)
	{
		/*append src[y] to dest[x] while overwritting the null byte in dest*/
		dest[x++] = src[y];
		return (dest);
	}
}
