# 🧮 Arduino 8-Bit Binary Sayaç ve Döngüsel Yazdırma

Bu proje, temel donanım kontrolü ve algoritmik döngü (for loop) mantığını birleştiren bir Arduino uygulamasıdır. Kullanıcının fiziksel butonlar aracılığıyla belirlediği onluk (decimal) sayı, 8-bitlik ikilik (binary) formata çevrilerek LED dizilimi üzerinde görselleştirilmektedir.

## 🛠️ Kullanılan Teknolojiler
* Arduino UNO 
* C (Arduino IDE)
* 8 adet LED ve 3 adet Push Buton

## 💡 Öne Çıkan Teknik Özellikler
* **Binary (İkilik) Dönüşüm:** Mod ve bölme operatörleri kullanılarak, onluk sayı sisteminden ikilik sayı sistemine matematiksel dönüştürme işlemi kodlanmıştır.
* **Donanım ve Döngü Entegrasyonu:** Kullanıcının donanım üzerinden (butonlar ile) girdiği değer, yazılım tarafındaki bir `for` döngüsünün sınırlarını dinamik olarak belirlemektedir.
* **Pull-Up Direnç Kullanımı:** Dışarıdan direnç bağlamak yerine mikrodenetleyicinin dahili `INPUT_PULLUP` özelliği kullanılarak devre tasarımı sadeleştirilmiştir.

## 🚀 Çalışma Mantığı
1. Devreye enerji verildiğinde Seri Port ekranında kullanıcıdan bir tekrar sayısı girmesi istenir.
2. "İleri" ve "Geri" butonları ile 0-255 arası bir sayı belirlenir. Bu sayı anlık olarak LED'ler üzerinde ikilik tabanda gösterilir.
3. "Enter" butonuna basıldığında, Seri Port ekranına belirlenen sayı kadar işlem çıktısı (İsim) alt alta numaralandırılarak yazdırılır ve sayaç bir sonraki işlem için sıfırlanır.
