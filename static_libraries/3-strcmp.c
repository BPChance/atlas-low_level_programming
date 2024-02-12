#include "main.h"
/**
 *  * _strcmp - entry point
 *   * @s1: char
 *    * @s2: char
 *     * Return: 0
 *      */
int _strcmp(char *s1, char *s2)
{
		int i = strlen(s1);
			int k = strlen(s2);
				int bigger;

					if (i < k)
							{
										bigger = k;
											}
						else if (i > k)
								{
											bigger = i;
												}
							for (i = 0; i < bigger; i++)
									{
												if (s1[i] == s2[i])
															{
																		}
														else
																	{
																					return (s1[i] - s2[i]);
																							}
															}
								s1 = '\0';
									s2 = '\0';
										return (0);
}
