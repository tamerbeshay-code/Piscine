/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TBeshay <tamer_karam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 19:13:40 by TBeshay           #+#    #+#             */
/*   Updated: 2026/03/09 23:39:31 by TBeshay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc,	char* argv[])
{

int i, sum = 0;
	
printf("argc =%d\n",argc );


printf("argv=\n");
if (argc >1)
{
for(i=1 ;  i < argc ; i++)
{
printf("argv[%d] = %s\n", i, argv[i]);
sum+= atoi( argv [i]);
}
printf("total=%d\n",sum);
}
return(0);
}

