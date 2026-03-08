/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argcargv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TBeshay <tamer_karam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 12:35:07 by TBeshay           #+#    #+#             */
/*   Updated: 2026/03/08 13:44:22 by TBeshay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include <unistd.h>
#	include <stdio.h>


int main (int argc, char* argv[])
{
	int i;
	printf("argc = %d\n", argc);
	printf("show argv[]");
	for(i = 0 ; i < argc; i++ );
	return(0);
}

