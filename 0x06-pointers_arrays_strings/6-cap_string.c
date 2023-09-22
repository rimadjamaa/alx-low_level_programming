/**
* cap_string - Capitalizes all words of a string based on specified separators.
* @str: The input string.
* Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
char separators[] = " \t\n,;.!?\"(){}";
int j, i, capitalize_next = 1;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; separators[j] != '\0'; j++)
{
if (str[j] == separators[j])
capitalize_next = 1;
}
if (capitalize_next)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A');
}
capitalize_next = 0;
}
else
{
if (str[i] >= 'A' && str[i] <= 'Z')
{
str[i] = str[i] + ('a' - 'A');
}
}
}
return (str);
}
