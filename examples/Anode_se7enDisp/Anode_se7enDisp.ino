#include <se7enDisp.h>  // kütüphanemiz dahil edildi
se7enDisp ssd(4,5,6,7,8,9,10);  // pinler burada tanımladır.

void setup() {
  ssd.setAnode(); // ortak Anot - Seven Segment Display için bu fonksiyon kullanılmalıdır.
}

void loop() {
  for (int i=0; i<=2; i++) { // Bu döngü, ekran üzerinde 5 sayısını 0.5 sn aralıklarla 3 kez gösterecek
    ssd.five(); // ekrana 5 sayısını yazdırdık
    delay(500); // 0.5 saniye bekletildi
    ssd.shotdown(); // tüm ledler söndürüldü
    delay(500);
  }
  ssd.timer(5,1000);
}
