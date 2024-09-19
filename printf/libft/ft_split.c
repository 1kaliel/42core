/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:21:44 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/06 15:54:11 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of words in a string separated by a given character.
 *
 * This function counts the number of words in a string by iterating through 
 * each character
 * and checking if it is equal to the given separator character. It keeps 
 * track of whether
 * it is currently inside a word or not using the `word` variable. 
 * If a character is not equal to the separator and `word` is false, 
 * it means a new word has started and the
 * `count` variable is incremented. If a character is equal to the separator,
 * `word` is
 * set to false to indicate that the current word has ended. 
 * The function returns the final count of words found in the string.
 *
 * @param s The string to count words in.
 * @param c The separator character.
 * @return The number of words found in the string.
 */
static size_t	c_words(const char *s, char c)
{
	size_t	count;
	int		word;

	count = 0;
	word = 0;
	while (*s)
	{
		if (*s != c && !word)
		{
			word = 1;
			count++;
		}
		else if (*s == c)
			word = 0;
		s++;
	}
	return (count);
}

/**
 * @brief Duplicates a word from a given string.
 *
 * This function takes a pointer to a string and a character as input.
 * It iterates through the string until it finds the specified character or 
 * reaches the end of the string.
 * It calculates the length of the word and then uses ft_substr to create a 
 * duplicate of the word.
 *
 * @param s A pointer to the string.
 * @param c The character to search for.
 * @return A pointer to the duplicated word.
 */
static char	*w_dup(const char **s, char c)
{
	char	*word;
	size_t	len;

	len = 0;
	while (**s && **s != c)
	{
		len++;
		(*s)++;
	}
	word = ft_substr(*s - len, 0, len);
	return (word);
}

/**
 * @brief Frees the memory allocated for a split string array.
 *
 * This function takes a split string array and frees the memory allocated for 
 * each string element and the array itself.
 *
 * @param split The split string array to be freed.
 * @param i The number of elements in the split string array.
 * @return NULL.
 */
static char	**free_split(char **split, size_t i)
{
	while (i > 0)
		free(split[--i]);
	free(split);
	return (NULL);
}

/**
 * @brief Splits a string into an array of substrings based on a 
 * delimiter character.
 *
 * This function takes a string `s` and a delimiter character `c` and 
 * splits the string into an array of substrings.
 * The substrings are separated by the delimiter character `c`. 
 * The resulting array of substrings is dynamically allocated and 
 * terminated with a NULL pointer.
 *
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return A dynamically allocated array of substrings, or NULL if an 
 *         error occurred.
 */
char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	words;
	size_t	i;

	if (!s)
		return (NULL);
	words = c_words(s, c);
	split = ft_calloc(words + 1, sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			split[i] = w_dup(&s, c);
			if (!split[i])
				return (free_split(split, i));
			i++;
		}
	}
	split[i] = NULL;
	return (split);
}
/*#include <stdio.h>
void print_split_result(char **result) {
    int i = 0;
    while (result[i]) {
        ft_putstr_fd(result[i], 1);
        ft_putchar_fd('\n', 1);
        i++;
    }
}

int main() {
    char **result;
	printf("Test case 1: Regular case\n");
    result = ft_split("Hello world this is a test", ' ');
    print_split_result(result);
	
	printf("Test case 2: Edge case - empty string\n");
    result = ft_split("", ' ');
    print_split_result(result);

	printf("Test case 3: Edge case - string with only delimiters\n");
    result = ft_split("     ", ' ');
    print_split_result(result);

	printf("Test case 4: Edge case - no delimiters\n");
    result = ft_split("HelloWorld", ' ');
    print_split_result(result);

	printf("Test case 5: Edge case - multiple consecutive delimiters\n");
    result = ft_split("Hello   world", ' ');
    print_split_result(result);

	printf("Test case 6: Edge case - delimiter at the start and end\n");
    result = ft_split("  Hello world  ", ' ');
    print_split_result(result);

    return 0;
}*/