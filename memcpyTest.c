/*
 * memcpyTest.c
 *
 *  Created on: 2018/08/31
 *      Author: hp
 */


#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
	char a[] = "abcdefgh";
	char b[] = "12345678";

	memcpy(a,b,sizeof(b));
#if 0
	何でこれがコメントなんだ、いや、わかるけど、
	やめてほしい。
	0がelseでそれ以外がtrueなのはわかるけど、、、わかりづらい
	てかメリットは何だ。
	//のほうがはやい
	/*
	 * これでもこの方が早いでしょ。
	 */
#endif

	printf("%s\n",a);
	return (0);
}
