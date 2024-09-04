#include "substring.h"
#include <stdlib.h>
#include <string.h>

/**
 * is_valid_substring - Vérifie si une sous-chaîne est valide
 * @s: La chaîne dans laquelle chercher
 * @words: Les mots à rechercher
 * @nb_words: Le nombre de mots à rechercher
 * @word_len: La longueur des mots
 * @start: L'index de début de la sous-chaîne
 *
 * Return: 1 si la sous-chaîne est valide, 0 sinon
 */
int is_valid_substring(
	const char *s, char const **words, int nb_words, int word_len, int start)
{
	int *used;
	int i, j, found;

	used = (int *)calloc(nb_words, sizeof(int));
	if (!used)
		return (0);

	for (i = 0; i < nb_words; i++)
	{
		found = 0;
		for (j = 0; j < nb_words; j++)
		{
			if (!used[j] && strncmp(s + start + i * word_len, words[j], word_len) == 0)
			{
				used[j] = 1;
				found = 1;
				break;
			}
		}
		if (!found)
		{
			free(used);
			return (0);
		}
	}
	free(used);
	return (1);
}

int *find_substring(char const *s, char const **words, int nb_words, int *n)
{
	int s_len, word_len, substr_len, max_indices;
	int *result;
	int i;

	if (!s || !words || nb_words <= 0 || !n)
		return (NULL);

	s_len = strlen(s);
	word_len = strlen(words[0]);
	substr_len = word_len * nb_words;
	max_indices = s_len - substr_len + 1;

	result = (int *)malloc(max_indices * sizeof(int));
	if (!result)
		return (NULL);

	*n = 0;

	for (i = 0; i <= s_len - substr_len; i++)
	{
		if (is_valid_substring(s, words, nb_words, word_len, i))
		{
			result[(*n)++] = i;
		}
	}

	if (*n == 0)
	{
		free(result);
		return (NULL);
	}

	return (result);
}
