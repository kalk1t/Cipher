#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#pragma warning(disable: 6001;4326)


#define menu 18
#define back_c 21
#define back_v 22
#define back_to_back 121
#define retry_c 122
#define retry_v 123
#define quit 9
#define about 10
#define caesar 101
#define vighnere 199


#define C_encrypt 201
#define C_decrypt 202
#define C_text 203
#define C_rotation 204
#define C_Encrypt_generate 205
#define C_generated 206
#define C_Decrypt_generate 207


#define V_encrypt 301
#define V_decrypt 302
#define V_text 303
#define V_key 304
#define V_Encrypt_generate 305
#define V_generated 306
#define V_Decrypt_generate 307

#define length 26



HWND tmp_1, tmp_2, tmp_3, tmp_4, tmp_5;

HWND C1, C2, C3, C4, C5, C6, C7, C8, C9, C10;

int X, Y, W, H;

int val;
char str[1024];
char RN[24];
int rotation_number;

char key[24];
