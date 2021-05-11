#include <iostream>
#include <string.h>
#include "ap_int.h"
#include "swater.h"

using namespace std;

void set_char_main(unsigned int  * array, int index, unsigned char val){
	switch(val){
		case 'A' : array[index / 16] |= (0 << ((index % 16) * 2));
		break;
		case 'C' : array[index / 16] |= (1 << ((index % 16) * 2));
		break;
		case 'G' : array[index / 16] |= (3 << ((index % 16) * 2));
		break;
		case 'T' : array[index / 16] |= (2 << ((index % 16) * 2));
		break;
	}

}

int main(int argc, char *argv[])
{
	bool pass = true;

	char query[N];
	char database[M];
	// int *similarity_matrix = (int*) malloc(sizeof(int) * N * M);
	// short *direction_matrixhw = (short*) malloc(sizeof(short) * N * M);
	// int *max_index = (int *) malloc(sizeof(int));

	ap_uint<K> direction_matrix_g[N+M-1];

	// int matrix[N*M];
	// short directionMatrixSW[N*M];

	// int max_index_sw[1];

	unsigned int query_param[N/16 + 1];
	unsigned int database_param [((M + 2*(N))/16 + 1)];

	for(int i = 0; i < N/16 + 1; i++) query_param[i] = 0;
	for(int i = 0; i < (M + 2*(N))/16 + 1; i++) database_param[i] = 0;

	

	cout << ">> Start test!" << endl;

	for(int t = 0; t < 10; t++) {
		cout << "------------------------" << endl;
//		fillRandom(query, N);
//		fillRandom(database, M);
		strcpy(query, str1[t].c_str());
		strcpy(database, str2[t].c_str());
		cout << "str1: " << query << endl;
		cout << "str2: " << database << endl;

		for(int i = 0; i < N; i++){
			set_char_main(query_param, i, query[i]);
		}

		for(int i = 0; i < M + 2*(N); i++){
			set_char_main(database_param, i, database[i]);
		}

		// memset(similarity_matrix, 0, sizeof(int) * N * M);
		// memset(direction_matrixhw, 0, sizeof(short) * N * M);

//		for(int i = 0; i < N*M; i++){
//			matrix[i] = 0;
//		}
		compute_matrices((ap_uint<K>*)(void*)query_param, (ap_uint<K>*)(void*)database_param, direction_matrix_g);

		if (direction_matrix_g[M+N-t*(10-t)].range(t*2+14, t*2+15) != direction[t]) {
			cout << ">> Test failed!" << endl;
			return 1;
		}


		cout << "direction: " << (direction_matrix_g[M+N-t*(10-t)].range(t*2+14, t*2+15)) << endl;
		
	}
	cout << "------------------------" << endl;

	if(!pass) {
		cout << ">> Test failed!" << endl;
		return 1;
	}

	cout << ">> Test passed!" << endl;
	cout << "------------------------" << endl;
	return 0;
}
