#include<stdio.h>
#include<string.h>

struct mahasiswa {
  char nama[50];
  int NPM, umur;
  float nilaiRataRata;
};

typedef struct mahasiswa mahasiswa;

void tampilkanDataMahasiswa(mahasiswa mhs){
  printf("Nama: %s\n", mhs.nama);
  printf("NPM: %d\n", mhs.NPM);
  printf("Umur: %d\n", mhs.umur);
  printf("Nilai Rata-Rata: %f\n", mhs.nilaiRataRata);
}

mahasiswa inputMahasiswa(){
  mahasiswa mhs;

  printf("Masukkan Nama: ");
  fgets(mhs.nama, 50, stdin);
  mhs.nama[strcspn(mhs.nama, "\n")] = '\0';

  printf("Masukan NPM: ");
  scanf("%d", &mhs.NPM);

  printf("Masukan Umur: ");
  scanf("%d", &mhs.umur);

  printf("Masukan Nilai Rata-Rata: ");
  scanf("%f", &mhs.nilaiRataRata);
  getchar();

  return mhs;
}

int main(){
  int jumlahMahasiswa;

  printf("\n==================================================\n");
  printf("Masukan Jumlah Mahasiswa: ");
  scanf("%d", &jumlahMahasiswa);
  getchar();

  mahasiswa array[jumlahMahasiswa];

  for (int i = 0; i < jumlahMahasiswa; i++){
    printf("\nMahasiswa ke-%d\n", i + 1);
    array[i] = inputMahasiswa();
  }

  printf("\n--------------------------------------------------\n");

  for(int i = 0; i < jumlahMahasiswa; i++){
    printf("\nData Mahasiswa ke-%d\n", i + 1);
    tampilkanDataMahasiswa(array[i]);
  }

  printf("\n==================================================\n");
  return 0;
}