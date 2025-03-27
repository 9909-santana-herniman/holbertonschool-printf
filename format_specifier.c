/**
 * format_specifiers - handles format specifiers
 * @format: specifier
 * @args: arguments
 * Return: Character count printed
 */
int format_specifiers(char format, va_list args)
{
	int count = 0;

	switch (format)
	{
	case 'c':
		count += _putchar(va_arg(args, int));
		break;
	case 's':
		count += print_string(va_arg(args, char *));
		break;
	case 'd':
	case 'i':
		count += print_number(va_arg(args, int));
	break;
	case '%':
		count += _putchar('%');
		break;
	default:
		count += _putchar('%');
		count += _putchar(format);
		break;
	}
	return (count);
}
