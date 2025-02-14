#include "ppos-disk-manager.h"
#include "ppos.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// structura de dados que representa o disco para o SO
disk_t disk;

// inicializacao do gerente de disco
int disk_mgr_init(int *numBlocks, int *blockSize) {
    // implementação da função
}

// leitura de um bloco, do disco para o buffer
int disk_block_read(int block, void *buffer) {
    // implementação da função
}

// escrita de um bloco, do buffer para o disco
int disk_block_write(int block, void *buffer) {
    // implementação da função
}

// escalonador de requisições do disco
diskrequest_t* disk_scheduler() {
    // implementação da função
}
