#include <se7enDisp.h>  // kütüphanemiz dahil edildi
se7enDisp ssd(4,5,6,7,8,9,10);  // pinler burada tanımlanır.

void setup() {
  ssd.setCathode(); // ortak Katot - Seven Segment Display için bu fonksiyon kullanılmalıdır.
}

void loop() {
  for (int i=0; i<=2; i++) { // Bu döngü, ekran üzerinde 5 sayısını 0.5 sn aralıklarla 3 kez gösterecek
    ssd.five();      // ekrana 5 sayısını yazdırdık
    delay(500);      // 0.5 saniye bekletildi
    ssd.shotdown();  // tüm ledler söndürüldü
    delay(500);      // tüm ledler söndürüldü
  }
  ssd.timer(5,1000); // timer() metodu iki parametrelidir.
                      // 1. parametre: Başlangıç saniyesini belirtir.
                      // 2. parametre: Bekleme süresini belirtir. (milisaniye)
                      // bu metod, parametresiz olarak da kullanılabilir.
}
