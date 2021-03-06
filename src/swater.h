#ifndef __SWATER_H__
#define __SWATER_H__

#include "ap_int.h"
#include <string>

using namespace std;

// directions codes
static const int CENTER = 0;
static const int NORTH = 1;
static const int NORTH_WEST = 2;
static const int WEST = 3;

// scores used for Smith Waterman similarity computation
static const short GAP_i = -1;
static const short GAP_d = -1;
static const short MATCH = 2;
static const short MISS_MATCH = -1;

#define N 32
#define M 128
#define K 64
#define NUM_ELEM (K / 2)

const string str1[10] = {
		"GTTTACTAATGGTCCGGCCAGTCCCGCTATA",
		"GCAGTAAATGAAAGGGCTGGGATAAATCTAT",
		"TCTCTGACAAAACGTTCTCAGTGCGTCCTGG",
		"CCAGGCTAGGAAGTGATAATAACCTTAGTTG",
		"AAACCCTCGTTCCACGTGCGCATGCCACCTC",
		"AGCATTTGAGCGACTCAGAGTGCTATTGGTC",
		"GATAAAGCAACCCTTAAGGACCAGCCGCGCA",
		"ACCTCATCACACATTAACGTGGCCTCCTAGC",
		"CACCTCGATTTGGTCATACCACAGAGGCTAC",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"	
};

const string str2[10] = {
		"ACCTCATCACACATTAACGTGGCCTCCTAGCCAGCCGCGCACCACTGGTCAAGTTACATACCCCATGTTATTGACCTCGCAACTCAGGACCGAACGGCCCCACGTTCGTCCTACAGGTGCTGCGTCAACCGAGAAGCGGAGGTGGGCGTCAGAGGCTAC",
		"CACCTCGATTCCAGCCGCGCACCACTCCTCGGTCAAGTTACATACCCCATGTTATTGAGCAACTCAGGACCGAATGGTCATACCACAGAGGCTACATAATAATGAACCTGGCTAGTCTACAGCTACTTTCATGAGAGAGGGAAGGAACTCCCTAATGCG",
		"AGTTCCGCTACTTGCACTCCCTAATGCGGTACCAGCCGCGCACCACTCCTCGCAACTCGGTCAAGTTACATACCCCATGTTATTGAAGGACCGAACTACCAGAGCTTAGACTCAGAGTGAGGAACAATGCCATACTTACCCACGCGGCCAGTCCCGCTA",
		"GTTTACTAATGGTCCGGCCAGTCCCGCTATTAGGACGGGGGTCAAGTTACATACCCCATGTTATTGATCGCTTGTACCGGGTGCCGGGGGCTATGTAACGACCAGCCGCGCACCACTCCTCGCAACTCAGGACCGAAATCGAAATGGCTGGGATAAATC",
		"CCAGGCTAGGAAGTGATAATAACTACTTGCACTCCCTAATGCTCTCAAACTGCCCAGCCGCGCACCACTCCTCGCAACTCAGGAGGTCAAGTTACATACCCCATGTTATTGATCGCTTAATCAGAGGATTGGGCCACCCGCATGGCGGGTGCGCATGCC",
		"AAACCCTCGTTCCACGTGCGCATGCCACCTCGGGTCCCAGCCGCGCACCACTCCTCGCAACTCAGGACCGAAGTTGGCCAGTCCCAATTGGTCTGTCGTGCTCCGCTTGGTGGGTCAAGTTACATACCCCATGTTATTGATCGCTAAACAGCAAAGTCC",
		"GCAGTAAATGAAAGGGCTGGGATAAATCGGTCAAGTTACATACCCCATGTTATTGATCGCTAACTGAGAAAGAGCCCCGCCGGATGATACTAAGCCATGGTTCATCACACATTAACCTGCGTCCAGCCGCGCACCACTCCTCGCAACTCAGGACCGAAC",
		"TCTCTGACAAAACGTTCTCAGTGCGTCCCAGCCGCGCACCACTCCTCGCAACTCAGGGTCAAGTTACATACCCCATGTTATTGATCGCTAACTGGACTAGGTCAAGTTGGCTATCGTAGCTTGTGACCAGTCACCACAACGGGCGGCCATAATAACCTT",
		"AGCATTTGAGCAATGAAAGGGCCAGCCGCGCACCACTCCTCGCAACTCAGGACCGAACTGGGTGGTCTGTCGTATGTTATTTCGGTCAAGTTACATACCCCATGTTATTGATCGCTTACGAGTTGGGGGCATTTATATGCATGCGAGACTGGGGAGACT",
		"GATAAAGCAACCCTTAAGGACCAGCCGCGCACCACTCCTCGCAATCCCCAGCCGCGCACCACTCCTCGCAACTCAGGACCGAATACGCCGGTAACGATACGGTTGGTTCGCGGTCAAGTTACATACCCCATGTTATTGATCGCTGCAGTTGCCAACGTG"
};

const int similarity[10] = {46, 52, 67, 45, 57, 47, 47, 53, 42, 51};
const int direction[10] = {2, 0, 2, 2, 1, 1, 1, 1, 2, 2};

void compute_matrices(ap_uint<K> *string1_g, ap_uint<K> *string2_g, ap_uint<K> *direction_matrix_g);


int rand_lim(int limit);

void fillRandom(char* string, int dimension);




#endif
