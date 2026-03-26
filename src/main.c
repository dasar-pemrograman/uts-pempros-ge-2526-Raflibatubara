// 12S25008-Rafli Batubara
#include <stdio.h>
#include <string.h>

int main() {
    char input[256];

    if ((input, sizeof(input), stdin)) {
        if (strncmp(input, "---", 3) == 0) {
            break;
        }

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Barang {
    char id[50];
    char nama[50];
    int jumlah;
    float harga;
};
    struct Barang daftarBarang[100];
    int totalBarang = 0;
    char input[255];
    while (1) {
        if ((input, sizeof(input), stdin) == NULL) {
            break;
        }
        input[strcspn(input, "\r\n")] = 0;
        if (strcmp(input, "---") == 0) {
            break;
        }
        char *perintah = strtok(input, "#");
        if (perintah == NULL) continue;
        if (strcmp(perintah, "receive") == 0) {
            char *id = strtok(NULL, "#");
            char *nama = strtok(NULL, "#");
            char *qty = strtok(NULL, "#");
            char *harga = strtok(NULL, "#");
            if (id && nama && qty && harga) {
                strcpy(daftarBarang[totalBarang].id, id);
                strcpy(daftarBarang[totalBarang].nama, nama);
                daftarBarang[totalBarang].jumlah = atoi(qty);
                daftarBarang[totalBarang].harga = atof(harga);
                totalBarang++;
            }
        } 
        else if (strcmp(perintah, "report") == 0) {
            for (int i = 0; i < totalBarang; i++) {
                printf("%s|%s|%d|%.1f\n", 
                    daftarBarang[i].id, 
                    daftarBarang[i].nama, 
                    daftarBarang[i].jumlah, 
                    daftarBarang[i].harga);
            }
        }
    }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    return 0;
}
