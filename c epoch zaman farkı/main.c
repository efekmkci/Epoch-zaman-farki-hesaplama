#include <stdio.h>
#include <time.h>

// Tarih ve saat bilgisini saklayan struct
struct DateTime {
    int year, month, day, hour, minute, second;
};

// Tarih bilgisini epoch zaman�na �evirmek i�in kullan�lan union
union EpochTime {
    struct tm timeStruct;
    time_t epoch;
};

// Fonksiyon: struct DateTime'� time_t epoch zaman�na �evirir
time_t convertToEpoch(struct DateTime dt) {
    union EpochTime et;
    et.timeStruct.tm_year = dt.year - 1900; // Y�l 1900'den ba�l�yor
    et.timeStruct.tm_mon = dt.month - 1;    // Aylar 0'dan ba�lar
    et.timeStruct.tm_mday = dt.day;
    et.timeStruct.tm_hour = dt.hour;
    et.timeStruct.tm_min = dt.minute;
    et.timeStruct.tm_sec = dt.second;
    et.timeStruct.tm_isdst = -1; // G�n �����ndan yararlanma otomatik

    return mktime(&et.timeStruct);
}

int main() {
    struct DateTime dt1, dt2;
    time_t epoch1, epoch2;
    double diff;

    // Kullan�c�dan tarih ve saat bilgilerini al
    printf("Birinci tarihi giriniz (YYYY MM DD HH MM SS): ");
    scanf("%d %d %d %d %d %d", &dt1.year, &dt1.month, &dt1.day, &dt1.hour, &dt1.minute, &dt1.second);

    printf("�kinci tarihi giriniz (YYYY MM DD HH MM SS): ");
    scanf("%d %d %d %d %d %d", &dt2.year, &dt2.month, &dt2.day, &dt2.hour, &dt2.minute, &dt2.second);

    // Epoch zamanlar�n� hesapla
    epoch1 = convertToEpoch(dt1);
    epoch2 = convertToEpoch(dt2);

    // Zaman fark�n� hesapla
    diff = difftime(epoch2, epoch1);

    // Sonu�lar� ekrana yazd�r
    printf("\nBirinci tarih epoch zamani: %ld\n", epoch1);
    printf("�kinci tarih epoch zamani: %ld\n", epoch2);
    printf("�ki tarih aras�ndaki fark: %.0f saniye (%.2f saat)\n", diff, diff / 3600.0);

    return 0;
}
