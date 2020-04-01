#include <stdio.h>

// program penghitung tahun kabisat dan jumlah hari dalam bulan //

int main(void) {
  int tahun,bulan;

  printf("Masukkan tahun: "); /* inputan tahun dan bulan yang akan dicari */
  scanf("%d", &tahun);
  printf("Masukan bulan: ");
  scanf("%d", &bulan);

  /* algoritma perhitungan tahun kabisat, mengunakan if else statment
     dan juga penggunaan modulo untuk menghitung tahun kabisatnya*/
  if (tahun%400 == 0 || tahun%4 == 0){
    printf("Tahun %d adalah TAHUN KABISAT\n", tahun);
  } else if(tahun%100 == 0){
    printf("Tahun %d Bukan TAHUN KABISAT\n", tahun);
  }  else {
    printf("Tahun %d Bukan TAHUN KABISAT\n", tahun);
  }

/* algoritma perhitungan jumlah hari pada bulan, menggunakan percabangan
   switch case  */
  switch (bulan) {
    case 1 :
      printf("jumlah hari pada bulan JANUARI tahun %d adalah 31\n", tahun);
      break;
    case 2 :
      /* dikarenakan untuk bulan ke 2 pada tahun kabisat itu 29 sedangkan tahun
          biasa 28 maka ditambahkan is else statment untuk mengecek kembali
          apakah tahun pada bulan tersebut kabisat atau tidak */
      if (tahun%400 == 0 || tahun%4==0) {
      printf("jumlah hari pada bulan FEBRUARI tahun %d adalah 29\n", tahun);
      } else {
      printf("jumlah hari pada bulan FEBRUARI tahun %d adalah 28\n", tahun);
        } break;
    case 3 :
      printf("jumlah hari pada bulan MARET tahun %d adalah 31\n", tahun);
      break;
    case 4 :
      printf("jumlah hari pada bulan APRIL tahun %d adalah 30\n", tahun);
      break;
    case 5 :
      printf("jumlah hari pada bulan MEI tahun %d adalah 31\n", tahun );
      break;
    case 6 :
      printf("jumlah hari pada bulan JUNI tahun %d adalah 30\n", tahun);
      break;
    case 7 :
      printf("jumlah hari pada bulan JULI tahun %d adalah 31\n", tahun);
      break;
    case 8 :
      printf("jumlah hari pada bulan AGUSTUS tahun %d adalah 30\n", tahun);
    break;
    case 9 :
      printf("jumlah hari pada bulan SEPTEMBER tahun %d adalah 31\n", tahun);
      break;
    case 10 :
      printf("jumlah hari pada bulan OKTOBER tahun %d adalah 30\n", tahun);
      break;
    case 11 :
      printf("jumlah hari pada bulan NOVEMBER tahun %d adalah 31\n", tahun);
      break;
    case 12 :
      printf("jumlah hari pada bulan DESEMBER tahun %d adalah 30\n", tahun);
      break;
    default :
      printf("Bulan tidak terdefinisi");
    }

  return 0;
}
