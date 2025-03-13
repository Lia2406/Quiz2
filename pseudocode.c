/*PROSEDUR TambahAwal(nilai)
    SIMPAN simpulBaru ? BUAT_SIMPUL(nilai)  
    JIKA KEPALA = NULL MAKA  
        KEPALA ? simpulBaru  
    LAINNYA  
        simpulBaru.SELANJUTNYA ? KEPALA  
        KEPALA ? simpulBaru  
    AKHIR_JIKA  
AKHIR_PROSEDUR

PROSEDUR TambahAkhir(nilai)
    SIMPAN simpulBaru ? BUAT_SIMPUL(nilai)  
    JIKA KEPALA = NULL MAKA  
        KEPALA ? simpulBaru  
    LAINNYA  
        SIMPAN sementara ? KEPALA  
        SELAMA sementara.SELANJUTNYA ? NULL LAKUKAN  
            sementara ? sementara.SELANJUTNYA  
        AKHIR_SELAMA  
        sementara.SELANJUTNYA ? simpulBaru  
    AKHIR_JIKA  
AKHIR_PROSEDUR

PROSEDUR TambahTengah(nilai, posisi)
    SIMPAN simpulBaru ? BUAT_SIMPUL(nilai)  
    SIMPAN sementara ? KEPALA  
    SIMPAN hitung ? 1  

    SELAMA hitung < posisi - 1 DAN sementara ? NULL LAKUKAN  
        sementara ? sementara.SELANJUTNYA  
        hitung ? hitung + 1  
    AKHIR_SELAMA  

    JIKA sementara = NULL MAKA  
        CETAK "Posisi tidak ditemukan"  
    LAINNYA  
        simpulBaru.SELANJUTNYA ? sementara.SELANJUTNYA  
        sementara.SELANJUTNYA ? simpulBaru  
    AKHIR_JIKA  
AKHIR_PROSEDUR

PROSEDUR UbahAwal(nilaiBaru)
    JIKA KEPALA = NULL MAKA  
        CETAK "List kosong"  
    LAINNYA  
        KEPALA.NILAI ? nilaiBaru  
    AKHIR_JIKA  
AKHIR_PROSEDUR

PROSEDUR UbahTengah(nilaiBaru, posisi)
    SIMPAN sementara ? KEPALA  
    SIMPAN hitung ? 1  

    SELAMA hitung < posisi DAN sementara ? NULL LAKUKAN  
        sementara ? sementara.SELANJUTNYA  
        hitung ? hitung + 1  
    AKHIR_SELAMA  

    JIKA sementara = NULL MAKA  
        CETAK "Posisi tidak ditemukan"  
    LAINNYA  
        sementara.NILAI ? nilaiBaru  
    AKHIR_JIKA  
AKHIR_PROSEDUR

PROSEDUR HapusAwal()
    JIKA KEPALA = NULL MAKA  
        CETAK "List kosong"  
    LAINNYA  
        SIMPAN sementara ? KEPALA  
        KEPALA ? KEPALA.SELANJUTNYA  
        HAPUS sementara  
    AKHIR_JIKA  
AKHIR_PROSEDUR

PROSEDUR HapusAkhir()
    JIKA KEPALA = NULL MAKA  
        CETAK "List kosong"  
    LAINNYA JIKA KEPALA.SELANJUTNYA = NULL MAKA  
        HAPUS KEPALA  
        KEPALA ? NULL  
    LAINNYA  
        SIMPAN sementara ? KEPALA  
        SELAMA sementara.SELANJUTNYA.SELANJUTNYA ? NULL LAKUKAN  
            sementara ? sementara.SELANJUTNYA  
        AKHIR_SELAMA  
        HAPUS sementara.SELANJUTNYA  
        sementara.SELANJUTNYA ? NULL  
    AKHIR_JIKA  
AKHIR_PROSEDUR

PROSEDUR HapusTengah(posisi)
    SIMPAN sementara ? KEPALA  
    SIMPAN hitung ? 1  

    SELAMA hitung < posisi - 1 DAN sementara ? NULL LAKUKAN  
        sementara ? sementara.SELANJUTNYA  
        hitung ? hitung + 1  
    AKHIR_SELAMA  

    JIKA sementara = NULL ATAU sementara.SELANJUTNYA = NULL MAKA  
        CETAK "Posisi tidak ditemukan"  
    LAINNYA  
        SIMPAN hapusSimpul ? sementara.SELANJUTNYA  
        sementara.SELANJUTNYA ? hapusSimpul.SELANJUTNYA  
        HAPUS hapusSimpul  
    AKHIR_JIKA  
AKHIR_PROSEDUR

PROSEDUR CariNilai(nilai)
    SIMPAN sementara ? KEPALA  
    SIMPAN posisi ? 1  

    SELAMA sementara ? NULL LAKUKAN  
        JIKA sementara.NILAI = nilai MAKA  
            CETAK "Nilai ditemukan di posisi", posisi  
            KEMBALIKAN  
        AKHIR_JIKA  
        sementara ? sementara.SELANJUTNYA  
        posisi ? posisi + 1  
    AKHIR_SELAMA  

    CETAK "Nilai tidak ditemukan"  
AKHIR_PROSEDUR

PROSEDUR HitungSimpul()
    SIMPAN sementara ? KEPALA  
    SIMPAN hitung ? 0  

    SELAMA sementara ? NULL LAKUKAN  
        hitung ? hitung + 1  
        sementara ? sementara.SELANJUTNYA  
    AKHIR_SELAMA  

    CETAK "Jumlah simpul:", hitung  
AKHIR_PROSEDUR

PROSEDUR TukarNilai(nilai1, nilai2)
    SIMPAN simpul1 ? NULL  
    SIMPAN simpul2 ? NULL  
    SIMPAN sementara ? KEPALA  

    SELAMA sementara ? NULL LAKUKAN  
        JIKA sementara.NILAI = nilai1 MAKA  
            simpul1 ? sementara  
        JIKA sementara.NILAI = nilai2 MAKA  
            simpul2 ? sementara  
        sementara ? sementara.SELANJUTNYA  
    AKHIR_SELAMA  

    JIKA simpul1 ? NULL DAN simpul2 ? NULL MAKA  
        SIMPAN sementaraNilai ? simpul1.NILAI  
        simpul1.NILAI ? simpul2.NILAI  
        simpul2.NILAI ? sementaraNilai  
    LAINNYA  
        CETAK "Salah satu nilai tidak ditemukan"  
    AKHIR_JIKA  
AKHIR_PROSEDUR


PROSEDUR JumlahkanNilai()
    SIMPAN jumlah ? 0  
    SIMPAN sementara ? KEPALA  

    SELAMA sementara ? NULL LAKUKAN  
        jumlah ? jumlah + sementara.NILAI  
        sementara ? sementara.SELANJUTNYA  
    AKHIR_SELAMA  

    CETAK "Total jumlah:", jumlah  
AKHIR_PROSEDUR*/

