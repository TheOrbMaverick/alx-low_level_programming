/**
 * print_buffer - Prints the content of a buffer.
 * @b: Pointer to the buffer.
 * @size: Size of the buffer.
 *
 * Return: None (void).
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		/* Print hexadecimal position */
		char hex_pos[9];
		int pos = i;
		for (j = 7; j >= 0; j--)
		{
			hex_pos[j] = (pos % 16 < 10) ? (pos % 16) + '0' : (pos % 16) - 10 + 'a';
			pos /= 16;
		}
		hex_pos[8] = '\0';
		for (j = 0; j < 8; j++)
		{
			_putchar(hex_pos[j]);
		}

		_putchar(':');
		_putchar(' ');

		/* Print hexadecimal content */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				char hex[3];
				int value = (unsigned char)b[i + j];
				hex[0] = (value / 16 < 10) ? (value / 16) + '0' : (value / 16) - 10 + 'a';
				hex[1] = (value % 16 < 10) ? (value % 16) + '0' : (value % 16) - 10 + 'a';
				hex[2] = '\0';
				for (int k = 0; k < 2; k++)
				{
					_putchar(hex[k]);
				}
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
			}

			if (j % 2 == 1)
			{
				_putchar(' ');
			}
		}

		/* Print ASCII content */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				char c = (b[i + j] >= 32 && b[i + j] <= 126) ? b[i + j] : '.';
				_putchar(c);
			}
		}

		_putchar('\n');
	}
}
