#ifndef SCANFTEST_H
#define SCANFTEST_H

/**
* int scanf ( const char * format, ... );
*		The additional arguments should point to already allocated objects of the type specified by their corresponding format specifier
*		within the format string.
*
* scanfµÄformat£¬ÈýÀà×Ö·û£º
*		Whitespace character: the function will read and ignore any whitespace characters encountered before
*			the next non-whitespace character (whitespace characters include spaces, newline and tab characters).
*			A single whitespace in the format string validates any quantity of whitespace characters extracted from the stream (including none).
*
*		Non-whitespace character, except format specifier (%): Any character that is not either a whitespace character (blank, newline or tab)
*			or part of a format specifier (which begin with a % character) causes the function to read the next character from the stream,
*			compare it to this non-whitespace character and if it matches, it is discarded and the function continues with the next character
*			of format. If the character does not match, the function fails, returning and leaving subsequent characters of the stream unread.
*
*		Format specifiers: A sequence formed by an initial percentage sign (%) indicates a format specifier, which is used to specify the type
*			and format of the data to be retrieved from the stream and stored into the locations pointed by the additional arguments.
**/
#include "../IOTest.h"
#include <stdio.h>

void IOTest::ScanfTest() {
	/*
	input: I have 123 apples and 456 pears				output: I have 123 apples and 456 pears
	input: I have123apples(\n)and456(\tab)pears			output: I have 123 apples and 456 pears
	input: I have 123 456 apples and 456 pears			output: I have 123 apples and (a random number) pears
	input: 123 I have123apples(\n)and456(\tab)pears		output: I have (a random number) apples and (a random number) pears
	*/
	int apple, pear;
	scanf_s("I have %d apples and %d pears", &apple, &pear);
	printf("I have %d apples and %d pears\n", apple, pear);

	/*

	*/

}

#endif //~SCANFTEST_H