# Epoch Zaman Farkı Hesaplama

Bu proje, kullanıcının girdiği iki farklı tarih ve saat için **epoch zamanını hesaplayan** ve aralarındaki farkı saniye ve saat cinsinden ekrana yazdıran bir **C programıdır**.

## 📌 Özellikler
- Kullanıcıdan iki farklı tarih ve saat alır.
- Bu tarihleri **epoch zamanına** çevirir.
- İki tarih arasındaki farkı **saniye ve saat** olarak hesaplar.

## 📂 Dosya İçeriği
- `main.c` → Programın ana kod dosyası.
- `README.md` → Bu açıklamaları içeren dosya.

## 🛠 Kullanılan Teknolojiler
- **C Programlama Dili**
- **time.h** kütüphanesi (Tarih ve saat işlemleri için)

## 📥 Kurulum ve Çalıştırma

1. **Depoyu klonlayın:**
   ```bash
   git clone https://github.com/kullaniciadi/epoch-time-difference.git
   cd epoch-time-difference
   ```

2. **Programı derleyin:**
   ```bash
   gcc -o epoch_time main.c -Wall
   ```

3. **Programı çalıştırın:**
   ```bash
   ./epoch_time
   ```

## 📌 Kullanım

Program çalıştırıldığında kullanıcıdan iki tarih ve saat girmesi istenir:
```
Birinci tarihi giriniz (YYYY MM DD HH MM SS): 2025 02 11 12 00 00
İkinci tarihi giriniz (YYYY MM DD HH MM SS): 2025 02 12 14 30 00
```

Program bu iki tarihin epoch zamanlarını hesaplar ve aralarındaki farkı ekrana yazdırır:
```
Birinci tarih epoch zamanı: 1733966400
İkinci tarih epoch zamanı: 1734054600
İki tarih arasındaki fark: 28200 saniye (7.83 saat)
```

## 🎯 Gerçek Hayatta Kullanım Örneği
Bu program, **# Epoch Zaman Farkı Hesaplama

Bu proje, kullanıcının girdiği iki farklı tarih ve saat için **epoch zamanını hesaplayan** ve aralarındaki farkı saniye ve saat cinsinden ekrana yazdıran bir **C programıdır**.

## 📌 Özellikler
- Kullanıcıdan iki farklı tarih ve saat alır.
- Bu tarihleri **epoch zamanına** çevirir.
- İki tarih arasındaki farkı **saniye ve saat** olarak hesaplar.

## 📂 Dosya İçeriği
- `main.c` → Programın ana kod dosyası.
- `README.md` → Bu açıklamaları içeren dosya.

## 🛠 Kullanılan Teknolojiler
- **C Programlama Dili**
- **time.h** kütüphanesi (Tarih ve saat işlemleri için)

## 📥 Kurulum ve Çalıştırma

1. **Depoyu klonlayın:**
   ```bash
   git clone https://github.com/kullaniciadi/epoch-time-difference.git
   cd epoch-time-difference
   ```

2. **Programı derleyin:**
   ```bash
   gcc -o epoch_time main.c -Wall
   ```

3. **Programı çalıştırın:**
   ```bash
   ./epoch_time
   ```

## 📌 Kullanım

Program çalıştırıldığında kullanıcıdan iki tarih ve saat girmesi istenir:
```
Birinci tarihi giriniz (YYYY MM DD HH MM SS): 2025 02 11 12 00 00
İkinci tarihi giriniz (YYYY MM DD HH MM SS): 2025 02 12 14 30 00
```

Program bu iki tarihin epoch zamanlarını hesaplar ve aralarındaki farkı ekrana yazdırır:
```
Birinci tarih epoch zamanı: 1733966400
İkinci tarih epoch zamanı: 1734054600
İki tarih arasındaki fark: 28200 saniye (7.83 saat)
```

## 🎯 Gerçek Hayatta Kullanım Örneği
Bu program, iki tarih arasındaki farkı hesaplayarak uçuş süresini belirler. Havayolu firmaları, uçuş saatlerini analiz etmek için benzer sistemleri kullanır.


