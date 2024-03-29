#ifndef MAIN_H
#define MAIN_H

/* Includes */
#include <stdint.h>
#include <stddef.h>

/* MACROS */
#define cmp(h)	~h
#define min(a, b)	((a<b)?a:b)			/* macro for minimum of 2 numbers */
#define SIZE(arr)	(sizeof(arr)/sizeof(arr[1]))		           	/* Macro for returning size of array */
#define POLYNOMIAL_8_BIT				0x1Du
#define POLYNOMIAL_16_BIT				0x1021

#define POLYNOMIAL_32_BIT_STM32			0x04C11DB7
#define POLYNOMIAL_32_BIT_7ZIP			0x1EDC6F41
#define POLYNOMIAL_B					0xEDB88320

#define FILE_SIZE_128k					131072

#define ROW_SIZE_3X3_MATRIX				3u
#define COL_SIZE_3X3_MATRIX				3u

/* Struct Typedefs */

typedef struct term{
	int coeff;
	int exp;
}term_t;

typedef struct poly{
	term_t t[10];
	int noofitmes;
}poly_t;

// single linked list
typedef struct node
{
	int value;
	struct node *next;
}node;

/* Function Prototypes */
void array_address_calculation();

void array_sum_wrapper(void);
int array_sum(void);
float array_avg();
void array_even_odd_sum();
void array_reverse();
void array_prime();

void inverse_num_wrapper(uint32_t num);
uint32_t inverse_num();

void sum_of_prime(int n);
void find_prime(int num);

void reverse_bits_wrapper(uint8_t n);
uint8_t reverse_bits(uint8_t n);

void vSelectionSort();
void vInsertionSort();

void string_reverse1(char *string);
void string_reverse2(char *string);
void string_reverse3(char *string);

void vstringSearch();
void strSrch(char *s1, char *s2);

void num_swapping_pointers(int *, int *);

void CRC_Practice();
uint8_t Simple_CRC8_I(uint8_t val);
uint8_t Simple_CRC8_II(uint8_t val);
uint8_t Simple_CRC8_III(uint8_t* val, uint8_t len);
uint8_t Simple_CRC8_IV(uint8_t* val, uint8_t len);
void CRC8_table();

uint16_t Simple_CRC16_I(uint8_t val);
uint16_t Simple_CRC16_II(uint8_t* val, uint8_t len);
void CRC16_table();

uint32_t Simple_CRC32_I(uint8_t val);
uint32_t Simple_CRC32_II(uint8_t* val, uint8_t len);
void CRC32_table();

void GenerateCRC32Table();
uint32_t crc32_for_byte(uint32_t r, uint32_t POLY);
void crc32(const void *data, size_t n_bytes, uint32_t* crc);

uint32_t calculateSTM32F4crc(uint8_t *buff, uint32_t len);

uint32_t vFibonacciSequence(uint32_t );
void polynomialUsingArray();
void initPoly(poly_t *p);
void polyAppend(poly_t *p, int coff, uint32_t exp);
void printPoly(poly_t *p);

/* Recursion */
void vLearnRecursion();

int func1(int a, int b);
int func2(int a, int b);


uint32_t fact(uint32_t);
uint32_t summation(uint32_t n);
void print1_to_n(uint32_t n);
uint32_t sum_of_digits(uint32_t);
void display_digits_of_number(uint32_t n);
void dec_bin_conv(uint32_t, uint8_t);
uint32_t power(uint32_t a, int n);
void PFactors(int num);
uint32_t greatest_common_divisor(uint32_t, uint32_t);
uint32_t divisibility_by_9(uint32_t n);
uint32_t divisibility_by_11(uint32_t n);
void tofh(int ndisk, char source, char temp, char dest);
uint32_t strLengthRec(char *str);
void printStrFwdRev(char *str);
uint32_t llLengthRec(node *n);
uint32_t llSumOfEle(node *n);

void vListFilesInDir();

/* Linked List helpers */
node* InsertEnd(node *head, int value);
node* DeleteEnd(node *head);
void printList(node *head);

void vLearnStateMachine(void);

#endif
