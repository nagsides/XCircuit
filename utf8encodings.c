/*-------------------------------------------------------------------------*/
/* utf8encodings.c --- translation tables between an encoding and UTF-8    */
/* Copyright (c) : see below				        	   */
/*-------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------*/
/* written (ie. converted the tables) by Erik van der Wal, May 2014  	   */
/*-------------------------------------------------------------------------*/

#include <stdio.h>

/*-------------------------------------------------------------------------*/
/* The data in this file is based on a number of files from unicode.org    */
/* The specific source of the translation is referenced in the heading     */
/* above each encoding                                                     */
/* All these files contained the following copyright notice:               */
/* (I underlined the relevant part)                                        */
/*-------------------------------------------------------------------------*/
/*
#	Copyright (c) 1991-1999 Unicode, Inc.  All Rights reserved.
#
#	This file is provided as-is by Unicode, Inc. (The Unicode Consortium).
#	No claims are made as to fitness for any particular purpose.  No
#	warranties of any kind are expressed or implied.  The recipient
#	agrees to determine applicability of information provided.  If this
#	file has been provided on optical media by Unicode, Inc., the sole
#	remedy for any claim will be exchange of defective media within 90
#	days of receipt.
#
#	Unicode, Inc. hereby grants the right to freely use the information
#                                                --------------------------
#	supplied in this file in the creation of products supporting the
#	Unicode Standard, and to make copies of this file in any form for
#	internal or external distribution as long as this notice remains
#                                         ------------------------------
#	attached.
#       --------
*/


/* Since the character at index 0 can never be used, it is used to store   */
/* the identification of the given encoding                                */
/* The encoding can be placed in random order, as long as it does start    */
/* with the standard encoding and it ends with a NULL, to indicate the end */
/* of the list.                                                            */
/* Non-existent characters are encoded with the unicode character:         */
/* 'REPLACEMENT CHARACTER' (typically a boxed question mark).              */

#define REPLC_CHAR "\xef\xbf\xbd"

const char *utf8encodings[][256] = {
/*--------------------------------------------------------------------------*/
/* stdenc                                                                   */
/* based on: ftp://ftp.unicode.org/Public/MAPPINGS/VENDORS/ADOBE/stdenc.txt */
/*--------------------------------------------------------------------------*/
{
/* 0x00 */ "Standard",     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x04 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x08 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x0c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x10 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x14 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x18 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x1c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x20 */ " ",    "!",    "\"",   "#",    "$",    "%",    "&","\xe2\x80\x99",
/* 0x28 */ "(",    ")",    "*",    "+",    ",", "\xc2\xad",".",    "/",
/* 0x30 */ "0",    "1",    "2",    "3",    "4",    "5",    "6",    "7",
/* 0x38 */ "8",    "9",    ":",    ";",    "<",    "=",    ">",    "?",
/* 0x40 */ "@",    "A",    "B",    "C",    "D",    "E",    "F",    "G",
/* 0x48 */ "H",    "I",    "J",    "K",    "L",    "M",    "N",    "O",
/* 0x50 */ "P",    "Q",    "R",    "S",    "T",    "U",    "V",    "W",
/* 0x58 */ "X",    "Y",    "Z",    "[",    "\\",   "]",    "^",    "_",
/* 0x60 */ "\xe2\x80\x98","a","b", "c",    "d",    "e",    "f",    "g",
/* 0x68 */ "h",    "i",    "j",    "k",    "l",    "m",    "n",    "o",
/* 0x70 */ "p",    "q",    "r",    "s",    "t",    "u",    "v",    "w",
/* 0x78 */ "x",    "y",    "z",    "{",    "|",    "}",    "~",    REPLC_CHAR,
/* 0x80 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x84 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x88 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x8c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x90 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x94 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x98 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x9c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0xa0 */ REPLC_CHAR,     "\xc2\xa1",     "\xc2\xa2",     "\xc2\xa3",
/* 0xa4 */ "\xe2\x81\x84", "\xc2\xa5",     "\xc6\x92",     "\xc2\xa7",
/* 0xa8 */ "\xc2\xa4",     "'",            "\xe2\x80\x9c", "\xc2\xab",
/* 0xac */ "\xe2\x80\xb9", "\xe2\x80\xba", "\xef\xac\x81", "\xef\xac\x82",
/* 0xb0 */ REPLC_CHAR,     "\xe2\x80\x93", "\xe2\x80\xa0", "\xe2\x80\xa1",
/* 0xb4 */ "\xc2\xb7",     REPLC_CHAR,     "\xc2\xb6",     "\xe2\x80\xa2",
/* 0xb8 */ "\xe2\x80\x9a", "\xe2\x80\x9e", "\xe2\x80\x9d", "\xc2\xbb",
/* 0xbc */ "\xe2\x80\xa6", "\xe2\x80\xb0", REPLC_CHAR,     "\xc2\xbf",
/* 0xc0 */ REPLC_CHAR,     "`",            "\xc2\xb4",     "\xcb\x86",
/* 0xc4 */ "\xcb\x9c",     "\xc2\xaf",     "\xcb\x98",     "\xcb\x99",
/* 0xc8 */ "\xc2\xa8",     REPLC_CHAR,     "\xcb\x9a",     "\xc2\xb8",
/* 0xcc */ REPLC_CHAR,     "\xcb\x9d",     "\xcb\x9b",     "\xcb\x87",
/* 0xd0 */ "\xe2\x80\x94", REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0xd4 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0xd8 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0xdc */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0xe0 */ REPLC_CHAR,     "\xc3\x86",     REPLC_CHAR,     "\xc2\xaa",
/* 0xe4 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0xe8 */ "\xc5\x81",     "\xc3\x98",     "\xc5\x92",     "\xc2\xba",
/* 0xec */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0xf0 */ REPLC_CHAR,     "\xc3\xa6",     REPLC_CHAR,     REPLC_CHAR,
/* 0xf4 */ REPLC_CHAR,     "\xc4\xb1",     REPLC_CHAR,     REPLC_CHAR,
/* 0xf8 */ "\xc5\x82",     "\xc3\xb8",     "\xc5\x93",     "\xc3\x9f",
/* 0xfc */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR
},
/*--------------------------------------------------------------------------*/
/* symbol                                                                   */
/* based on: ftp://ftp.unicode.org/Public/MAPPINGS/VENDORS/ADOBE/symbol.txt */
/*--------------------------------------------------------------------------*/
{
/* 0x00 */ "Symbol",       REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x04 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x08 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x0c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x10 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x14 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x18 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x1c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x20 */ " ",            "!",            "\xe2\x88\x80", "#",
/* 0x24 */ "\xe2\x88\x83", "%",            "&",            "\xe2\x88\x8b",
/* 0x28 */ "(",            ")",            "\xe2\x88\x97", "+",
/* 0x2c */ ",",            "\xe2\x88\x92", ".",            "/",
/* 0x30 */ "0",    "1",    "2",    "3",    "4",    "5",    "6",    "7",
/* 0x38 */ "8",    "9",    ":",    ";",    "<",    "=",    ">",    "?",
/* 0x40 */ "\xe2\x89\x85", "\xce\x91",     "\xce\x92",     "\xce\xa7",
/* 0x44 */ "\xce\x94",     "\xce\x95",     "\xce\xa6",     "\xce\x93",
/* 0x48 */ "\xce\x97",     "\xce\x99",     "\xcf\x91",     "\xce\x9a",
/* 0x4c */ "\xce\x9b",     "\xce\x9c",     "\xce\x9d",     "\xce\x9f",
/* 0x50 */ "\xce\xa0",     "\xce\x98",     "\xce\xa1",     "\xce\xa3",
/* 0x54 */ "\xce\xa4",     "\xce\xa5",     "\xcf\x82",     "\xe2\x84\xa6",
/* 0x58 */ "\xce\x9e",     "\xce\xa8",     "\xce\x96",     "[",
/* 0x5c */ "\xe2\x88\xb4", "]",            "\xe2\x8a\xa5", "_",
/* 0x60 */ "\xef\xa3\xa5", "\xce\xb1",     "\xce\xb2",     "\xcf\x87",
/* 0x64 */ "\xce\xb4",     "\xce\xb5",     "\xcf\x86",     "\xce\xb3",
/* 0x68 */ "\xce\xb7",     "\xce\xb9",     "\xcf\x95",     "\xce\xba",
/* 0x6c */ "\xce\xbb",     "\xc2\xb5",     "\xce\xbd",     "\xce\xbf",
/* 0x70 */ "\xcf\x80",     "\xce\xb8",     "\xcf\x81",     "\xcf\x83",
/* 0x74 */ "\xcf\x84",     "\xcf\x85",     "\xcf\x96",     "\xcf\x89",
/* 0x78 */ "\xce\xbe",     "\xcf\x88",     "\xce\xb6",     "{",
/* 0x7c */ "|",            "}",            "\xe2\x88\xbc", REPLC_CHAR,
/* 0x80 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x84 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x88 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x8c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x90 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x94 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x98 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x9c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0xa0 */ "\xe2\x82\xac", "\xcf\x92",     "\xe2\x80\xb2", "\xe2\x89\xa4",
/* 0xa4 */ "\xe2\x88\x95", "\xe2\x88\x9e", "\xc6\x92",     "\xe2\x99\xa3",
/* 0xa8 */ "\xe2\x99\xa6", "\xe2\x99\xa5", "\xe2\x99\xa0", "\xe2\x86\x94",
/* 0xac */ "\xe2\x86\x90", "\xe2\x86\x91", "\xe2\x86\x92", "\xe2\x86\x93",
/* 0xb0 */ "\xc2\xb0",     "\xc2\xb1",     "\xe2\x80\xb3", "\xe2\x89\xa5",
/* 0xb4 */ "\xc3\x97",     "\xe2\x88\x9d", "\xe2\x88\x82", "\xe2\x80\xa2",
/* 0xb8 */ "\xc3\xb7",     "\xe2\x89\xa0", "\xe2\x89\xa1", "\xe2\x89\x88",
/* 0xbc */ "\xe2\x80\xa6", "\xef\xa3\xa6", "\xef\xa3\xa7", "\xe2\x86\xb5",
/* 0xc0 */ "\xe2\x84\xb5", "\xe2\x84\x91", "\xe2\x84\x9c", "\xe2\x84\x98",
/* 0xc4 */ "\xe2\x8a\x97", "\xe2\x8a\x95", "\xe2\x88\x85", "\xe2\x88\xa9",
/* 0xc8 */ "\xe2\x88\xaa", "\xe2\x8a\x83", "\xe2\x8a\x87", "\xe2\x8a\x84",
/* 0xcc */ "\xe2\x8a\x82", "\xe2\x8a\x86", "\xe2\x88\x88", "\xe2\x88\x89",
/* 0xd0 */ "\xe2\x88\xa0", "\xe2\x88\x87", "\xef\x9b\x9a", "\xef\x9b\x99",
/* 0xd4 */ "\xef\x9b\x9b", "\xe2\x88\x8f", "\xe2\x88\x9a", "\xe2\x8b\x85",
/* 0xd8 */ "\xc2\xac",     "\xe2\x88\xa7", "\xe2\x88\xa8", "\xe2\x87\x94",
/* 0xdc */ "\xe2\x87\x90", "\xe2\x87\x91", "\xe2\x87\x92", "\xe2\x87\x93",
/* 0xe0 */ "\xe2\x97\x8a", "\xe2\x8c\xa9", "\xef\xa3\xa8", "\xef\xa3\xa9",
/* 0xe4 */ "\xef\xa3\xaa", "\xe2\x88\x91", "\xef\xa3\xab", "\xef\xa3\xac",
/* 0xe8 */ "\xef\xa3\xad", "\xef\xa3\xae", "\xef\xa3\xaf", "\xef\xa3\xb0",
/* 0xec */ "\xef\xa3\xb1", "\xef\xa3\xb2", "\xef\xa3\xb3", "\xef\xa3\xb4",
/* 0xf0 */ REPLC_CHAR,     "\xe2\x8c\xaa", "\xe2\x88\xab", "\xe2\x8c\xa0",
/* 0xf4 */ "\xef\xa3\xb5", "\xe2\x8c\xa1", "\xef\xa3\xb6", "\xef\xa3\xb7",
/* 0xf8 */ "\xef\xa3\xb8", "\xef\xa3\xb9", "\xef\xa3\xba", "\xef\xa3\xbb",
/* 0xfc */ "\xef\xa3\xbc", "\xef\xa3\xbd", "\xef\xa3\xbe", REPLC_CHAR
},
/*--------------------------------------------------------------------------*/
/* iso 8859-1                                                               */
/* based on: ftp://ftp.unicode.org/Public/MAPPINGS/ISO8859/8859-1.TXT       */
/*--------------------------------------------------------------------------*/
{
/* 0x00 */ "ISOLatin1",    REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x04 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x08 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x0c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x10 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x14 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x18 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x1c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x20 */ " ",    "!",    "\"",   "#",    "$",    "%",    "&",    "'",
/* 0x28 */ "(",    ")",    "*",    "+",    ",",    "-",    ".",    "/",
/* 0x30 */ "0",    "1",    "2",    "3",    "4",    "5",    "6",    "7",
/* 0x38 */ "8",    "9",    ":",    ";",    "<",    "=",    ">",    "?",
/* 0x40 */ "@",    "A",    "B",    "C",    "D",    "E",    "F",    "G",
/* 0x48 */ "H",    "I",    "J",    "K",    "L",    "M",    "N",    "O",
/* 0x50 */ "P",    "Q",    "R",    "S",    "T",    "U",    "V",    "W",
/* 0x58 */ "X",    "Y",    "Z",    "[",    "\\",   "]",    "^",    "_",
/* 0x60 */ "`",    "a",    "b",    "c",    "d",    "e",    "f",    "g",
/* 0x68 */ "h",    "i",    "j",    "k",    "l",    "m",    "n",    "o",
/* 0x70 */ "p",    "q",    "r",    "s",    "t",    "u",    "v",    "w",
/* 0x78 */ "x",    "y",    "z",    "{",    "|",    "}",    "~",    "\x7f",
/* 0x80 */ "\xc2\x80",     "\xc2\x81",     "\xc2\x82",     "\xc2\x83",
/* 0x84 */ "\xc2\x84",     "\xc2\x85",     "\xc2\x86",     "\xc2\x87",
/* 0x88 */ "\xc2\x88",     "\xc2\x89",     "\xc2\x8a",     "\xc2\x8b",
/* 0x8c */ "\xc2\x8c",     "\xc2\x8d",     "\xc2\x8e",     "\xc2\x8f",
/* 0x90 */ "\xc2\x90",     "\xc2\x91",     "\xc2\x92",     "\xc2\x93",
/* 0x94 */ "\xc2\x94",     "\xc2\x95",     "\xc2\x96",     "\xc2\x97",
/* 0x98 */ "\xc2\x98",     "\xc2\x99",     "\xc2\x9a",     "\xc2\x9b",
/* 0x9c */ "\xc2\x9c",     "\xc2\x9d",     "\xc2\x9e",     "\xc2\x9f",
/* 0xa0 */ "\xc2\xa0",     "\xc2\xa1",     "\xc2\xa2",     "\xc2\xa3",
/* 0xa4 */ "\xc2\xa4",     "\xc2\xa5",     "\xc2\xa6",     "\xc2\xa7",
/* 0xa8 */ "\xc2\xa8",     "\xc2\xa9",     "\xc2\xaa",     "\xc2\xab",
/* 0xac */ "\xc2\xac",     "\xc2\xad",     "\xc2\xae",     "\xc2\xaf",
/* 0xb0 */ "\xc2\xb0",     "\xc2\xb1",     "\xc2\xb2",     "\xc2\xb3",
/* 0xb4 */ "\xc2\xb4",     "\xc2\xb5",     "\xc2\xb6",     "\xc2\xb7",
/* 0xb8 */ "\xc2\xb8",     "\xc2\xb9",     "\xc2\xba",     "\xc2\xbb",
/* 0xbc */ "\xc2\xbc",     "\xc2\xbd",     "\xc2\xbe",     "\xc2\xbf",
/* 0xc0 */ "\xc3\x80",     "\xc3\x81",     "\xc3\x82",     "\xc3\x83",
/* 0xc4 */ "\xc3\x84",     "\xc3\x85",     "\xc3\x86",     "\xc3\x87",
/* 0xc8 */ "\xc3\x88",     "\xc3\x89",     "\xc3\x8a",     "\xc3\x8b",
/* 0xcc */ "\xc3\x8c",     "\xc3\x8d",     "\xc3\x8e",     "\xc3\x8f",
/* 0xd0 */ "\xc3\x90",     "\xc3\x91",     "\xc3\x92",     "\xc3\x93",
/* 0xd4 */ "\xc3\x94",     "\xc3\x95",     "\xc3\x96",     "\xc3\x97",
/* 0xd8 */ "\xc3\x98",     "\xc3\x99",     "\xc3\x9a",     "\xc3\x9b",
/* 0xdc */ "\xc3\x9c",     "\xc3\x9d",     "\xc3\x9e",     "\xc3\x9f",
/* 0xe0 */ "\xc3\xa0",     "\xc3\xa1",     "\xc3\xa2",     "\xc3\xa3",
/* 0xe4 */ "\xc3\xa4",     "\xc3\xa5",     "\xc3\xa6",     "\xc3\xa7",
/* 0xe8 */ "\xc3\xa8",     "\xc3\xa9",     "\xc3\xaa",     "\xc3\xab",
/* 0xec */ "\xc3\xac",     "\xc3\xad",     "\xc3\xae",     "\xc3\xaf",
/* 0xf0 */ "\xc3\xb0",     "\xc3\xb1",     "\xc3\xb2",     "\xc3\xb3",
/* 0xf4 */ "\xc3\xb4",     "\xc3\xb5",     "\xc3\xb6",     "\xc3\xb7",
/* 0xf8 */ "\xc3\xb8",     "\xc3\xb9",     "\xc3\xba",     "\xc3\xbb",
/* 0xfc */ "\xc3\xbc",     "\xc3\xbd",     "\xc3\xbe",     "\xc3\xbf"
},
/*--------------------------------------------------------------------------*/
/* iso 8859-2                                                               */
/* based on: ftp://ftp.unicode.org/Public/MAPPINGS/ISO8859/8859-2.TXT       */
/*--------------------------------------------------------------------------*/
{
/* 0x00 */ "ISOLatin2",    REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x04 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x08 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x0c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x10 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x14 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x18 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x1c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x20 */ " ",    "!",    "\"",   "#",    "$",    "%",    "&",    "'",
/* 0x28 */ "(",    ")",    "*",    "+",    ",",    "-",    ".",    "/",
/* 0x30 */ "0",    "1",    "2",    "3",    "4",    "5",    "6",    "7",
/* 0x38 */ "8",    "9",    ":",    ";",    "<",    "=",    ">",    "?",
/* 0x40 */ "@",    "A",    "B",    "C",    "D",    "E",    "F",    "G",
/* 0x48 */ "H",    "I",    "J",    "K",    "L",    "M",    "N",    "O",
/* 0x50 */ "P",    "Q",    "R",    "S",    "T",    "U",    "V",    "W",
/* 0x58 */ "X",    "Y",    "Z",    "[",    "\\",   "]",    "^",    "_",
/* 0x60 */ "`",    "a",    "b",    "c",    "d",    "e",    "f",    "g",
/* 0x68 */ "h",    "i",    "j",    "k",    "l",    "m",    "n",    "o",
/* 0x70 */ "p",    "q",    "r",    "s",    "t",    "u",    "v",    "w",
/* 0x78 */ "x",    "y",    "z",    "{",    "|",    "}",    "~",    "\x7f",
/* 0x80 */ "\xc2\x80",     "\xc2\x81",     "\xc2\x82",     "\xc2\x83",
/* 0x84 */ "\xc2\x84",     "\xc2\x85",     "\xc2\x86",     "\xc2\x87",
/* 0x88 */ "\xc2\x88",     "\xc2\x89",     "\xc2\x8a",     "\xc2\x8b",
/* 0x8c */ "\xc2\x8c",     "\xc2\x8d",     "\xc2\x8e",     "\xc2\x8f",
/* 0x90 */ "\xc2\x90",     "\xc2\x91",     "\xc2\x92",     "\xc2\x93",
/* 0x94 */ "\xc2\x94",     "\xc2\x95",     "\xc2\x96",     "\xc2\x97",
/* 0x98 */ "\xc2\x98",     "\xc2\x99",     "\xc2\x9a",     "\xc2\x9b",
/* 0x9c */ "\xc2\x9c",     "\xc2\x9d",     "\xc2\x9e",     "\xc2\x9f",
/* 0xa0 */ "\xc2\xa0",     "\xc4\x84",     "\xcb\x98",     "\xc5\x81",
/* 0xa4 */ "\xc2\xa4",     "\xc4\xbd",     "\xc5\x9a",     "\xc2\xa7",
/* 0xa8 */ "\xc2\xa8",     "\xc5\xa0",     "\xc5\x9e",     "\xc5\xa4",
/* 0xac */ "\xc5\xb9",     "\xc2\xad",     "\xc5\xbd",     "\xc5\xbb",
/* 0xb0 */ "\xc2\xb0",     "\xc4\x85",     "\xcb\x9b",     "\xc5\x82",
/* 0xb4 */ "\xc2\xb4",     "\xc4\xbe",     "\xc5\x9b",     "\xcb\x87",
/* 0xb8 */ "\xc2\xb8",     "\xc5\xa1",     "\xc5\x9f",     "\xc5\xa5",
/* 0xbc */ "\xc5\xba",     "\xcb\x9d",     "\xc5\xbe",     "\xc5\xbc",
/* 0xc0 */ "\xc5\x94",     "\xc3\x81",     "\xc3\x82",     "\xc4\x82",
/* 0xc4 */ "\xc3\x84",     "\xc4\xb9",     "\xc4\x86",     "\xc3\x87",
/* 0xc8 */ "\xc4\x8c",     "\xc3\x89",     "\xc4\x98",     "\xc3\x8b",
/* 0xcc */ "\xc4\x9a",     "\xc3\x8d",     "\xc3\x8e",     "\xc4\x8e",
/* 0xd0 */ "\xc4\x90",     "\xc5\x83",     "\xc5\x87",     "\xc3\x93",
/* 0xd4 */ "\xc3\x94",     "\xc5\x90",     "\xc3\x96",     "\xc3\x97",
/* 0xd8 */ "\xc5\x98",     "\xc5\xae",     "\xc3\x9a",     "\xc5\xb0",
/* 0xdc */ "\xc3\x9c",     "\xc3\x9d",     "\xc5\xa2",     "\xc3\x9f",
/* 0xe0 */ "\xc5\x95",     "\xc3\xa1",     "\xc3\xa2",     "\xc4\x83",
/* 0xe4 */ "\xc3\xa4",     "\xc4\xba",     "\xc4\x87",     "\xc3\xa7",
/* 0xe8 */ "\xc4\x8d",     "\xc3\xa9",     "\xc4\x99",     "\xc3\xab",
/* 0xec */ "\xc4\x9b",     "\xc3\xad",     "\xc3\xae",     "\xc4\x8f",
/* 0xf0 */ "\xc4\x91",     "\xc5\x84",     "\xc5\x88",     "\xc3\xb3",
/* 0xf4 */ "\xc3\xb4",     "\xc5\x91",     "\xc3\xb6",     "\xc3\xb7",
/* 0xf8 */ "\xc5\x99",     "\xc5\xaf",     "\xc3\xba",     "\xc5\xb1",
/* 0xfc */ "\xc3\xbc",     "\xc3\xbd",     "\xc5\xa3",     "\xcb\x99"
},
/*--------------------------------------------------------------------------*/
/* iso 8859-3                                                               */
/* based on: ftp://ftp.unicode.org/Public/MAPPINGS/ISO8859/8859-3.TXT       */
/*--------------------------------------------------------------------------*/
{
/* 0x00 */ "ISOLatin3",    REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x04 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x08 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x0c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x10 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x14 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x18 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x1c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x20 */ " ",    "!",    "\"",   "#",    "$",    "%",    "&",    "'",
/* 0x28 */ "(",    ")",    "*",    "+",    ",",    "-",    ".",    "/",
/* 0x30 */ "0",    "1",    "2",    "3",    "4",    "5",    "6",    "7",
/* 0x38 */ "8",    "9",    ":",    ";",    "<",    "=",    ">",    "?",
/* 0x40 */ "@",    "A",    "B",    "C",    "D",    "E",    "F",    "G",
/* 0x48 */ "H",    "I",    "J",    "K",    "L",    "M",    "N",    "O",
/* 0x50 */ "P",    "Q",    "R",    "S",    "T",    "U",    "V",    "W",
/* 0x58 */ "X",    "Y",    "Z",    "[",    "\\",   "]",    "^",    "_",
/* 0x60 */ "`",    "a",    "b",    "c",    "d",    "e",    "f",    "g",
/* 0x68 */ "h",    "i",    "j",    "k",    "l",    "m",    "n",    "o",
/* 0x70 */ "p",    "q",    "r",    "s",    "t",    "u",    "v",    "w",
/* 0x78 */ "x",    "y",    "z",    "{",    "|",    "}",    "~",    "\x7f",
/* 0x80 */ "\xc2\x80",     "\xc2\x81",     "\xc2\x82",     "\xc2\x83",
/* 0x84 */ "\xc2\x84",     "\xc2\x85",     "\xc2\x86",     "\xc2\x87",
/* 0x88 */ "\xc2\x88",     "\xc2\x89",     "\xc2\x8a",     "\xc2\x8b",
/* 0x8c */ "\xc2\x8c",     "\xc2\x8d",     "\xc2\x8e",     "\xc2\x8f",
/* 0x90 */ "\xc2\x90",     "\xc2\x91",     "\xc2\x92",     "\xc2\x93",
/* 0x94 */ "\xc2\x94",     "\xc2\x95",     "\xc2\x96",     "\xc2\x97",
/* 0x98 */ "\xc2\x98",     "\xc2\x99",     "\xc2\x9a",     "\xc2\x9b",
/* 0x9c */ "\xc2\x9c",     "\xc2\x9d",     "\xc2\x9e",     "\xc2\x9f",
/* 0xa0 */ "\xc2\xa0",     "\xc4\xa6",     "\xcb\x98",     "\xc2\xa3",
/* 0xa4 */ "\xc2\xa4",     REPLC_CHAR,     "\xc4\xa4",     "\xc2\xa7",
/* 0xa8 */ "\xc2\xa8",     "\xc4\xb0",     "\xc5\x9e",     "\xc4\x9e",
/* 0xac */ "\xc4\xb4",     "\xc2\xad",     REPLC_CHAR,     "\xc5\xbb",
/* 0xb0 */ "\xc2\xb0",     "\xc4\xa7",     "\xc2\xb2",     "\xc2\xb3",
/* 0xb4 */ "\xc2\xb4",     "\xc2\xb5",     "\xc4\xa5",     "\xc2\xb7",
/* 0xb8 */ "\xc2\xb8",     "\xc4\xb1",     "\xc5\x9f",     "\xc4\x9f",
/* 0xbc */ "\xc4\xb5",     "\xc2\xbd",     REPLC_CHAR,     "\xc5\xbc",
/* 0xc0 */ "\xc3\x80",     "\xc3\x81",     "\xc3\x82",     REPLC_CHAR,
/* 0xc4 */ "\xc3\x84",     "\xc4\x8a",     "\xc4\x88",     "\xc3\x87",
/* 0xc8 */ "\xc3\x88",     "\xc3\x89",     "\xc3\x8a",     "\xc3\x8b",
/* 0xcc */ "\xc3\x8c",     "\xc3\x8d",     "\xc3\x8e",     "\xc3\x8f",
/* 0xd0 */ REPLC_CHAR,     "\xc3\x91",     "\xc3\x92",     "\xc3\x93",
/* 0xd4 */ "\xc3\x94",     "\xc4\xa0",     "\xc3\x96",     "\xc3\x97",
/* 0xd8 */ "\xc4\x9c",     "\xc3\x99",     "\xc3\x9a",     "\xc3\x9b",
/* 0xdc */ "\xc3\x9c",     "\xc5\xac",     "\xc5\x9c",     "\xc3\x9f",
/* 0xe0 */ "\xc3\xa0",     "\xc3\xa1",     "\xc3\xa2",     REPLC_CHAR,
/* 0xe4 */ "\xc3\xa4",     "\xc4\x8b",     "\xc4\x89",     "\xc3\xa7",
/* 0xe8 */ "\xc3\xa8",     "\xc3\xa9",     "\xc3\xaa",     "\xc3\xab",
/* 0xec */ "\xc3\xac",     "\xc3\xad",     "\xc3\xae",     "\xc3\xaf",
/* 0xf0 */ REPLC_CHAR,     "\xc3\xb1",     "\xc3\xb2",     "\xc3\xb3",
/* 0xf4 */ "\xc3\xb4",     "\xc4\xa1",     "\xc3\xb6",     "\xc3\xb7",
/* 0xf8 */ "\xc4\x9d",     "\xc3\xb9",     "\xc3\xba",     "\xc3\xbb",
/* 0xfc */ "\xc3\xbc",     "\xc5\xad",     "\xc5\x9d",     "\xcb\x99"
},
/*--------------------------------------------------------------------------*/
/* iso 8859-4                                                               */
/* based on: ftp://ftp.unicode.org/Public/MAPPINGS/ISO8859/8859-4.TXT       */
/*--------------------------------------------------------------------------*/
{
/* 0x00 */ "ISOLatin4",    REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x04 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x08 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x0c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x10 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x14 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x18 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x1c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x20 */ " ",    "!",    "\"",   "#",    "$",    "%",    "&",    "'",
/* 0x28 */ "(",    ")",    "*",    "+",    ",",    "-",    ".",    "/",
/* 0x30 */ "0",    "1",    "2",    "3",    "4",    "5",    "6",    "7",
/* 0x38 */ "8",    "9",    ":",    ";",    "<",    "=",    ">",    "?",
/* 0x40 */ "@",    "A",    "B",    "C",    "D",    "E",    "F",    "G",
/* 0x48 */ "H",    "I",    "J",    "K",    "L",    "M",    "N",    "O",
/* 0x50 */ "P",    "Q",    "R",    "S",    "T",    "U",    "V",    "W",
/* 0x58 */ "X",    "Y",    "Z",    "[",    "\\",   "]",    "^",    "_",
/* 0x60 */ "`",    "a",    "b",    "c",    "d",    "e",    "f",    "g",
/* 0x68 */ "h",    "i",    "j",    "k",    "l",    "m",    "n",    "o",
/* 0x70 */ "p",    "q",    "r",    "s",    "t",    "u",    "v",    "w",
/* 0x78 */ "x",    "y",    "z",    "{",    "|",    "}",    "~",    "\x7f",
/* 0x80 */ "\xc2\x80",     "\xc2\x81",     "\xc2\x82",     "\xc2\x83",
/* 0x84 */ "\xc2\x84",     "\xc2\x85",     "\xc2\x86",     "\xc2\x87",
/* 0x88 */ "\xc2\x88",     "\xc2\x89",     "\xc2\x8a",     "\xc2\x8b",
/* 0x8c */ "\xc2\x8c",     "\xc2\x8d",     "\xc2\x8e",     "\xc2\x8f",
/* 0x90 */ "\xc2\x90",     "\xc2\x91",     "\xc2\x92",     "\xc2\x93",
/* 0x94 */ "\xc2\x94",     "\xc2\x95",     "\xc2\x96",     "\xc2\x97",
/* 0x98 */ "\xc2\x98",     "\xc2\x99",     "\xc2\x9a",     "\xc2\x9b",
/* 0x9c */ "\xc2\x9c",     "\xc2\x9d",     "\xc2\x9e",     "\xc2\x9f",
/* 0xa0 */ "\xc2\xa0",     "\xc4\x84",     "\xc4\xb8",     "\xc5\x96",
/* 0xa4 */ "\xc2\xa4",     "\xc4\xa8",     "\xc4\xbb",     "\xc2\xa7",
/* 0xa8 */ "\xc2\xa8",     "\xc5\xa0",     "\xc4\x92",     "\xc4\xa2",
/* 0xac */ "\xc5\xa6",     "\xc2\xad",     "\xc5\xbd",     "\xc2\xaf",
/* 0xb0 */ "\xc2\xb0",     "\xc4\x85",     "\xcb\x9b",     "\xc5\x97",
/* 0xb4 */ "\xc2\xb4",     "\xc4\xa9",     "\xc4\xbc",     "\xcb\x87",
/* 0xb8 */ "\xc2\xb8",     "\xc5\xa1",     "\xc4\x93",     "\xc4\xa3",
/* 0xbc */ "\xc5\xa7",     "\xc5\x8a",     "\xc5\xbe",     "\xc5\x8b",
/* 0xc0 */ "\xc4\x80",     "\xc3\x81",     "\xc3\x82",     "\xc3\x83",
/* 0xc4 */ "\xc3\x84",     "\xc3\x85",     "\xc3\x86",     "\xc4\xae",
/* 0xc8 */ "\xc4\x8c",     "\xc3\x89",     "\xc4\x98",     "\xc3\x8b",
/* 0xcc */ "\xc4\x96",     "\xc3\x8d",     "\xc3\x8e",     "\xc4\xaa",
/* 0xd0 */ "\xc4\x90",     "\xc5\x85",     "\xc5\x8c",     "\xc4\xb6",
/* 0xd4 */ "\xc3\x94",     "\xc3\x95",     "\xc3\x96",     "\xc3\x97",
/* 0xd8 */ "\xc3\x98",     "\xc5\xb2",     "\xc3\x9a",     "\xc3\x9b",
/* 0xdc */ "\xc3\x9c",     "\xc5\xa8",     "\xc5\xaa",     "\xc3\x9f",
/* 0xe0 */ "\xc4\x81",     "\xc3\xa1",     "\xc3\xa2",     "\xc3\xa3",
/* 0xe4 */ "\xc3\xa4",     "\xc3\xa5",     "\xc3\xa6",     "\xc4\xaf",
/* 0xe8 */ "\xc4\x8d",     "\xc3\xa9",     "\xc4\x99",     "\xc3\xab",
/* 0xec */ "\xc4\x97",     "\xc3\xad",     "\xc3\xae",     "\xc4\xab",
/* 0xf0 */ "\xc4\x91",     "\xc5\x86",     "\xc5\x8d",     "\xc4\xb7",
/* 0xf4 */ "\xc3\xb4",     "\xc3\xb5",     "\xc3\xb6",     "\xc3\xb7",
/* 0xf8 */ "\xc3\xb8",     "\xc5\xb3",     "\xc3\xba",     "\xc3\xbb",
/* 0xfc */ "\xc3\xbc",     "\xc5\xa9",     "\xc5\xab",     "\xcb\x99"
},
/*--------------------------------------------------------------------------*/
/* CP1254 (ISO Latin-5)                                                     */
/* based on:								    */
/* ftp://ftp.unicode.org/Public/MAPPINGS/VENDORS/MICSFT/WINDOWS/CP1254.TXT  */
/*--------------------------------------------------------------------------*/
{
/* 0x00 */ "ISOLatin5",    REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x04 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x08 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x0c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x10 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x14 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x18 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x1c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x20 */ " ",    "!",    "\"",   "#",    "$",    "%",    "&",    "'",
/* 0x28 */ "(",    ")",    "*",    "+",    ",",    "-",    ".",    "/",
/* 0x30 */ "0",    "1",    "2",    "3",    "4",    "5",    "6",    "7",
/* 0x38 */ "8",    "9",    ":",    ";",    "<",    "=",    ">",    "?",
/* 0x40 */ "@",    "A",    "B",    "C",    "D",    "E",    "F",    "G",
/* 0x48 */ "H",    "I",    "J",    "K",    "L",    "M",    "N",    "O",
/* 0x50 */ "P",    "Q",    "R",    "S",    "T",    "U",    "V",    "W",
/* 0x58 */ "X",    "Y",    "Z",    "[",    "\\",   "]",    "^",    "_",
/* 0x60 */ "`",    "a",    "b",    "c",    "d",    "e",    "f",    "g",
/* 0x68 */ "h",    "i",    "j",    "k",    "l",    "m",    "n",    "o",
/* 0x70 */ "p",    "q",    "r",    "s",    "t",    "u",    "v",    "w",
/* 0x78 */ "x",    "y",    "z",    "{",    "|",    "}",    "~",    "\x7f",
/* 0x80 */ "\xe2\x82\xac", REPLC_CHAR,     "\xe2\x80\x9a", "\xc6\x92",
/* 0x84 */ "\xe2\x80\x9e", "\xe2\x80\xa6", "\xe2\x80\xa0", "\xe2\x80\xa1",
/* 0x88 */ "\xcb\x86",     "\xe2\x80\xb0", "\xc5\xa0",     "\xe2\x80\xb9",
/* 0x8c */ "\xc5\x92",     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x90 */ REPLC_CHAR,     "\xe2\x80\x98", "\xe2\x80\x99", "\xe2\x80\x9c",
/* 0x94 */ "\xe2\x80\x9d", "\xe2\x80\xa2", "\xe2\x80\x93", "\xe2\x80\x94",
/* 0x98 */ "\xcb\x9c",     "\xe2\x84\xa2", "\xc5\xa1",     "\xe2\x80\xba",
/* 0x9c */ "\xc5\x93", REPLC_CHAR, REPLC_CHAR, "\xc5\xb8",
/* 0xa0 */ "\xc2\xa0", "\xc2\xa1", "\xc2\xa2", "\xc2\xa3",
/* 0xa4 */ "\xc2\xa4", "\xc2\xa5", "\xc2\xa6", "\xc2\xa7",
/* 0xa8 */ "\xc2\xa8", "\xc2\xa9", "\xc2\xaa", "\xc2\xab",
/* 0xac */ "\xc2\xac", "\xc2\xad", "\xc2\xae", "\xc2\xaf",
/* 0xb0 */ "\xc2\xb0", "\xc2\xb1", "\xc2\xb2", "\xc2\xb3",
/* 0xb4 */ "\xc2\xb4", "\xc2\xb5", "\xc2\xb6", "\xc2\xb7",
/* 0xb8 */ "\xc2\xb8", "\xc2\xb9", "\xc2\xba", "\xc2\xbb",
/* 0xbc */ "\xc2\xbc", "\xc2\xbd", "\xc2\xbe", "\xc2\xbf",
/* 0xc0 */ "\xc3\x80", "\xc3\x81", "\xc3\x82", "\xc3\x83",
/* 0xc4 */ "\xc3\x84", "\xc3\x85", "\xc3\x86", "\xc3\x87",
/* 0xc8 */ "\xc3\x88", "\xc3\x89", "\xc3\x8a", "\xc3\x8b",
/* 0xcc */ "\xc3\x8c", "\xc3\x8d", "\xc3\x8e", "\xc3\x8f",
/* 0xd0 */ "\xc4\x9e", "\xc3\x91", "\xc3\x92", "\xc3\x93",
/* 0xd4 */ "\xc3\x94", "\xc3\x95", "\xc3\x96", "\xc3\x97",
/* 0xd8 */ "\xc3\x98", "\xc3\x99", "\xc3\x9a", "\xc3\x9b",
/* 0xdc */ "\xc3\x9c", "\xc4\xb0", "\xc5\x9e", "\xc3\x9f",
/* 0xe0 */ "\xc3\xa0", "\xc3\xa1", "\xc3\xa2", "\xc3\xa3",
/* 0xe4 */ "\xc3\xa4", "\xc3\xa5", "\xc3\xa6", "\xc3\xa7",
/* 0xe8 */ "\xc3\xa8", "\xc3\xa9", "\xc3\xaa", "\xc3\xab",
/* 0xec */ "\xc3\xac", "\xc3\xad", "\xc3\xae", "\xc3\xaf",
/* 0xf0 */ "\xc4\x9f", "\xc3\xb1", "\xc3\xb2", "\xc3\xb3",
/* 0xf4 */ "\xc3\xb4", "\xc3\xb5", "\xc3\xb6", "\xc3\xb7",
/* 0xf8 */ "\xc3\xb8", "\xc3\xb9", "\xc3\xba", "\xc3\xbb",
/* 0xfc */ "\xc3\xbc", "\xc4\xb1", "\xc5\x9f", "\xc3\xbf"
},
/*--------------------------------------------------------------------------*/
/* iso 8859-6                                                               */
/* based on: ftp://ftp.unicode.org/Public/MAPPINGS/ISO8859/8859-6.TXT       */
/*--------------------------------------------------------------------------*/
{
/* 0x00 */ "ISOLatin6",    REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x04 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x08 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x0c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x10 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x14 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x18 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x1c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x20 */ " ",    "!",    "\"",   "#",    "$",    "%",    "&",    "'",
/* 0x28 */ "(",    ")",    "*",    "+",    ",",    "-",    ".",    "/",
/* 0x30 */ "0",    "1",    "2",    "3",    "4",    "5",    "6",    "7",
/* 0x38 */ "8",    "9",    ":",    ";",    "<",    "=",    ">",    "?",
/* 0x40 */ "@",    "A",    "B",    "C",    "D",    "E",    "F",    "G",
/* 0x48 */ "H",    "I",    "J",    "K",    "L",    "M",    "N",    "O",
/* 0x50 */ "P",    "Q",    "R",    "S",    "T",    "U",    "V",    "W",
/* 0x58 */ "X",    "Y",    "Z",    "[",    "\\",   "]",    "^",    "_",
/* 0x60 */ "`",    "a",    "b",    "c",    "d",    "e",    "f",    "g",
/* 0x68 */ "h",    "i",    "j",    "k",    "l",    "m",    "n",    "o",
/* 0x70 */ "p",    "q",    "r",    "s",    "t",    "u",    "v",    "w",
/* 0x78 */ "x",    "y",    "z",    "{",    "|",    "}",    "~",    "\x7f",
/* 0x80 */ "\xc2\x80",     "\xc2\x81",     "\xc2\x82",     "\xc2\x83",
/* 0x84 */ "\xc2\x84",     "\xc2\x85",     "\xc2\x86",     "\xc2\x87",
/* 0x88 */ "\xc2\x88",     "\xc2\x89",     "\xc2\x8a",     "\xc2\x8b",
/* 0x8c */ "\xc2\x8c",     "\xc2\x8d",     "\xc2\x8e",     "\xc2\x8f",
/* 0x90 */ "\xc2\x90",     "\xc2\x91",     "\xc2\x92",     "\xc2\x93",
/* 0x94 */ "\xc2\x94",     "\xc2\x95",     "\xc2\x96",     "\xc2\x97",
/* 0x98 */ "\xc2\x98",     "\xc2\x99",     "\xc2\x9a",     "\xc2\x9b",
/* 0x9c */ "\xc2\x9c",     "\xc2\x9d",     "\xc2\x9e",     "\xc2\x9f",
/* 0xa0 */ "\xc2\xa0",     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0xa4 */ "\xc2\xa4",     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0xa8 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0xac */ "\xd8\x8c",     "\xc2\xad",     REPLC_CHAR,     REPLC_CHAR,
/* 0xb0 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0xb4 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0xb8 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     "\xd8\x9b",
/* 0xbc */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     "\xd8\x9f",
/* 0xc0 */ REPLC_CHAR,     "\xd8\xa1",     "\xd8\xa2",     "\xd8\xa3",
/* 0xc4 */ "\xd8\xa4",     "\xd8\xa5",     "\xd8\xa6",     "\xd8\xa7",
/* 0xc8 */ "\xd8\xa8",     "\xd8\xa9",     "\xd8\xaa",     "\xd8\xab",
/* 0xcc */ "\xd8\xac",     "\xd8\xad",     "\xd8\xae",     "\xd8\xaf",
/* 0xd0 */ "\xd8\xb0",     "\xd8\xb1",     "\xd8\xb2",     "\xd8\xb3",
/* 0xd4 */ "\xd8\xb4",     "\xd8\xb5",     "\xd8\xb6",     "\xd8\xb7",
/* 0xd8 */ "\xd8\xb8",     "\xd8\xb9",     "\xd8\xba",     REPLC_CHAR,
/* 0xdc */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0xe0 */ "\xd9\x80",     "\xd9\x81",     "\xd9\x82",     "\xd9\x83",
/* 0xe4 */ "\xd9\x84",     "\xd9\x85",     "\xd9\x86",     "\xd9\x87",
/* 0xe8 */ "\xd9\x88",     "\xd9\x89",     "\xd9\x8a",     "\xd9\x8b",
/* 0xec */ "\xd9\x8c",     "\xd9\x8d",     "\xd9\x8e",     "\xd9\x8f",
/* 0xf0 */ "\xd9\x90",     "\xd9\x91",     "\xd9\x92",     REPLC_CHAR,
/* 0xf4 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0xf8 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0xfc */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR
},
/*--------------------------------------------------------------------------*/
/* iso 8859-5                                                               */
/* based on: ftp://ftp.unicode.org/Public/MAPPINGS/ISO8859/8859-5.TXT       */
/*--------------------------------------------------------------------------*/
{
/* 0x00 */ "ISO8859-5",    REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x04 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x08 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x0c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x10 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x14 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x18 */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x1c */ REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,     REPLC_CHAR,
/* 0x20 */ " ",    "!",    "\"",   "#",    "$",    "%",    "&",    "'",
/* 0x28 */ "(",    ")",    "*",    "+",    ",",    "-",    ".",    "/",
/* 0x30 */ "0",    "1",    "2",    "3",    "4",    "5",    "6",    "7",
/* 0x38 */ "8",    "9",    ":",    ";",    "<",    "=",    ">",    "?",
/* 0x40 */ "@",    "A",    "B",    "C",    "D",    "E",    "F",    "G",
/* 0x48 */ "H",    "I",    "J",    "K",    "L",    "M",    "N",    "O",
/* 0x50 */ "P",    "Q",    "R",    "S",    "T",    "U",    "V",    "W",
/* 0x58 */ "X",    "Y",    "Z",    "[",    "\\",   "]",    "^",    "_",
/* 0x60 */ "`",    "a",    "b",    "c",    "d",    "e",    "f",    "g",
/* 0x68 */ "h",    "i",    "j",    "k",    "l",    "m",    "n",    "o",
/* 0x70 */ "p",    "q",    "r",    "s",    "t",    "u",    "v",    "w",
/* 0x78 */ "x",    "y",    "z",    "{",    "|",    "}",    "~",    "\x7f",
/* 0x80 */ "\xc2\x80",     "\xc2\x81",     "\xc2\x82",     "\xc2\x83",
/* 0x84 */ "\xc2\x84",     "\xc2\x85",     "\xc2\x86",     "\xc2\x87",
/* 0x88 */ "\xc2\x88",     "\xc2\x89",     "\xc2\x8a",     "\xc2\x8b",
/* 0x8c */ "\xc2\x8c",     "\xc2\x8d",     "\xc2\x8e",     "\xc2\x8f",
/* 0x90 */ "\xc2\x90",     "\xc2\x91",     "\xc2\x92",     "\xc2\x93",
/* 0x94 */ "\xc2\x94",     "\xc2\x95",     "\xc2\x96",     "\xc2\x97",
/* 0x98 */ "\xc2\x98",     "\xc2\x99",     "\xc2\x9a",     "\xc2\x9b",
/* 0x9c */ "\xc2\x9c",     "\xc2\x9d",     "\xc2\x9e",     "\xc2\x9f",
/* 0xa0 */ "\xc2\xa0",     "\xd0\x81",     "\xd0\x82",     "\xd0\x83",
/* 0xa4 */ "\xd0\x84",     "\xd0\x85",     "\xd0\x86",     "\xd0\x87",
/* 0xa8 */ "\xd0\x88",     "\xd0\x89",     "\xd0\x8a",     "\xd0\x8b",
/* 0xac */ "\xd0\x8c",     "\xc2\xad",     "\xd0\x8e",     "\xd0\x8f",
/* 0xb0 */ "\xd0\x90",     "\xd0\x91",     "\xd0\x92",     "\xd0\x93",
/* 0xb4 */ "\xd0\x94",     "\xd0\x95",     "\xd0\x96",     "\xd0\x97",
/* 0xb8 */ "\xd0\x98",     "\xd0\x99",     "\xd0\x9a",     "\xd0\x9b",
/* 0xbc */ "\xd0\x9c",     "\xd0\x9d",     "\xd0\x9e",     "\xd0\x9f",
/* 0xc0 */ "\xd0\xa0",     "\xd0\xa1",     "\xd0\xa2",     "\xd0\xa3",
/* 0xc4 */ "\xd0\xa4",     "\xd0\xa5",     "\xd0\xa6",     "\xd0\xa7",
/* 0xc8 */ "\xd0\xa8",     "\xd0\xa9",     "\xd0\xaa",     "\xd0\xab",
/* 0xcc */ "\xd0\xac",     "\xd0\xad",     "\xd0\xae",     "\xd0\xaf",
/* 0xd0 */ "\xd0\xb0",     "\xd0\xb1",     "\xd0\xb2",     "\xd0\xb3",
/* 0xd4 */ "\xd0\xb4",     "\xd0\xb5",     "\xd0\xb6",     "\xd0\xb7",
/* 0xd8 */ "\xd0\xb8",     "\xd0\xb9",     "\xd0\xba",     "\xd0\xbb",
/* 0xdc */ "\xd0\xbc",     "\xd0\xbd",     "\xd0\xbe",     "\xd0\xbf",
/* 0xe0 */ "\xd1\x80",     "\xd1\x81",     "\xd1\x82",     "\xd1\x83",
/* 0xe4 */ "\xd1\x84",     "\xd1\x85",     "\xd1\x86",     "\xd1\x87",
/* 0xe8 */ "\xd1\x88",     "\xd1\x89",     "\xd1\x8a",     "\xd1\x8b",
/* 0xec */ "\xd1\x8c",     "\xd1\x8d",     "\xd1\x8e",     "\xd1\x8f",
/* 0xf0 */ "\xe2\x84\x96", "\xd1\x91",     "\xd1\x92",     "\xd1\x93",
/* 0xf4 */ "\xd1\x94",     "\xd1\x95",     "\xd1\x96",     "\xd1\x97",
/* 0xf8 */ "\xd1\x98",     "\xd1\x99",     "\xd1\x9a",     "\xd1\x9b",
/* 0xfc */ "\xd1\x9c",     "\xc2\xa7",     "\xd1\x9e",     "\xd1\x9f"
},

/*--------------------------------------------------------------------------*/
/* Closing line should be NULL                                              */
/*--------------------------------------------------------------------------*/
{(char*) 0}

};

/*----------------------------------------------------------------------*/
/* Routine to search for a UTF-8 code in the tables and return the	*/
/* associated 8-bit code (reverse lookup).				*/
/*									*/
/* Note that this routine does not check whether or not the encoding	*/
/* scheme containing the UTF-8 character code is the encoding		*/
/* currently in effect in a text string.				*/
/*----------------------------------------------------------------------*/

int utf8_reverse_lookup(char *utf8string)
{
    int i, j;
    char *s1, *s2;

    for (i = 0; ; i++) {
	if (utf8encodings[i][0] == NULL) break;
	for (j = 0; j < 256; j++) {
	    s1 = (char *)utf8encodings[i][j];
	    s2 = utf8string;
	    while (*s1 == *s2) {
		if (*s1 == '\0')
		    return j;
		s1++;
		s2++;
	    }
	    /* NOTE: Xutf8LookupString() results in strings longer than	*/
	    /* expected for the UTF-8 code.  Not sure what they are, 	*/
	    /* but the initial part matches the expected code.		*/
	    if ((*s1 == '\0') && (s2 > (utf8string + 1))) return j;
	}
    }
    return -1;
}
