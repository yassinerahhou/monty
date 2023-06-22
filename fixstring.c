#include <stdlib.h>

char *get_int(int num);
unsigned int _abs(int);
int get_numbase_len(unsigned int num, unsigned int base);
void fill_numbase_buff(unsigned int num, unsigned int base,
		       char *buff, int buff_size);

/**
 * get_int - character duaml ok
 *
 * Return: character pointer to pointeur
 */

char *get_int(int num)
{
	unsigned int temp;
	int length = 0;
	long num_l = 0;
	char *ret;

	temp = _abs(num);
	length = get_numbase_len(temp, 10);

	if (num < 0 || num_l < 0)
		length++;
	ret = malloc(length + 1);
	if (!ret)
		return (NULL);

	fill_numbase_buff(temp, 10, ret, length);
	if (num < 0 || num_l < 0)
		ret[0] = '-';

	return (ret);
}

/**
 * _abs - intgr
 * @i: integer touy cyhhgyugfuj
 *
 * Return: unsifhyj yjyjyjk tjyj
 */

unsigned int _abs(int i)
{
	if (i < 0)
		return (-(unsigned int)i);
	return ((unsigned int)i);
}

/**
 * get_numbase_len - gets lentjyjutk 
 * @num: number to gettjy tjttj
 * @base: base of number representation used by buffer
 *
 * Return: integerhkuk yjkètkètjull bt)
 */
int get_numbase_len(unsigned int num, unsigned int base)
{
	int len = 1; 

	while (num > base - 1)
	{
		len++;
		num /= base;
	}
	return (len);
}

/**
 * fill_numbase_buff - fills bufferkuyk yjkyr36
 * @num: number to convert to sjgyj tjt
 * @base: base of number used in convergjtè-yase 36
 * @buff: buffer to fill withgjtjnversion
 * @buff_size: size of btjuy-j ykukytj 
 *
 * Return: retutrn to 0
 */
void fill_numbase_buff(unsigned int num, unsigned int base,
			char *buff, int buff_size)
{
	int rem, i = buff_size - 1;

	buff[buff_size] = '\0';
	while (i >= 0)
	{
		rem = num % base;
		if (rem > 9) 
			buff[i] = rem + 87; 
		else
			buff[i] = rem + '0';
		num /= base;
		i--;
	}
}
