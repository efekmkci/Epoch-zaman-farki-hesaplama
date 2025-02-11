#include <stdio.h>
#include <time.h>

// Tarih ve saat bilgisini saklayan struct
struct DateTime {
    int year, month, day, hour, minute, second;
};

// Tarih bilgisini epoch zamanýna çevirmek için kullanýlan union
union EpochTime {
    struct tm timeStruct;
    time_t epoch;
};

// Fonksiyon: struct DateTime'ý time_t epoch zamanýna çevirir
time_t convertToEpoch(struct DateTime dt) {
    union EpochTime et;
    et.timeStruct.tm_year = dt.year - 1900; // Yýl 1900'den baþlýyor
    et.timeStruct.tm_mon = dt.month - 1;    // Aylar 0'dan baþlar
    et.timeStruct.tm_mday = dt.day;
    et.timeStruct.tm_hour = dt.hour;
    et.timeStruct.tm_min = dt.minute;
    et.timeStruct.tm_sec = dt.second;
    et.timeStruct.tm_isdst = -1; // Gün ýþýðýndan yararlanma otomatik

    return mktime(&et.timeStruct);
}

int main() {
    struct DateTime departure, arrival;
    time_t epoch_departure, epoch_arrival;
    double flight_duration;

    // Kullanýcýdan kalkýþ tarih ve saat bilgilerini al
    printf("Ucusun kalkis tarihini giriniz (YYYY MM DD HH MM SS): ");
    scanf("%d %d %d %d %d %d", &departure.year, &departure.month, &departure.day, &departure.hour, &departure.minute, &departure.second);

    // Kullanýcýdan varýþ tarih ve saat bilgilerini al
    printf("Ucusun varis tarihini giriniz (YYYY MM DD HH MM SS): ");
    scanf("%d %d %d %d %d %d", &arrival.year, &arrival.month, &arrival.day, &arrival.hour, &arrival.minute, &arrival.second);

    // Epoch zamanlarýný hesapla
    epoch_departure = convertToEpoch(departure);
    epoch_arrival = convertToEpoch(arrival);

    // Uçuþ süresini hesapla
    flight_duration = difftime(epoch_arrival, epoch_departure);

    // Sonuçlarý ekrana yazdýr
    printf("\nKalkis epoch zamani: %ld\n", epoch_departure);
    printf("Varis epoch zamani: %ld\n", epoch_arrival);
    printf("Toplam ucus suresi: %.0f saniye (%.2f saat)\n", flight_duration, flight_duration / 3600.0);

    return 0;
}

