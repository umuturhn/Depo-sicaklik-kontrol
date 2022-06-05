# Proje özeti
Kimyasal üreten bir fabrikada, üretilen kimyasalların stoklandığı deponun sıcaklığı ölçülmekte ve bu sıcaklığa bağlı olarak işlemler gerçekleşmektedir.
# Projenin amacı
Depo sıcaklığını kontrol altında tutmak, sıcaklığın belirli eşik değerleri aşması halinde yapılması gereken işlemleri ve uyarıları kullanıcılara iletmek ve üretilen ürünlerin bozulmasını engellemek için gerekirse ürünlerin farklı bir depoya kaydırılıp, ısınan deponun boşaltılıp soğutulmasını sağlamaktır.
# Projenin çalışması
Arduino vasıtasıyla LM35 sıcaklık sensöründen gelen veriler seri haberleşme yöntemi ile bilgisayar ortamına aktarılır ve LabVIEW aracılığıyla görselleştirilir.
- 2 saniye aralıklarla ölçüm yapılır.
  - Eğer ölçülen sıcaklık değeri 27 derecenin altındaysa herhangi bir led yanmaz, sistem uyarısı **Sıcaklık normal, bir sorun algılanmadı.** olarak görülür.Soğutucular o an çalışmadıklarından **Duruyorlar** olarak görülür.
  - Eğer ölçülen sıcaklık değeri 27 ile 30 derece arasında ise **sarı** renkli tehlike ledimiz yanar, sistem uyarısı **Sıcaklık artmakta, süreci daha dikkatli takip ediniz.** olarak görülür. Soğutucular ise **1.kademede çalışıyorlar.** olarak görülür.
  - Eğer ölçülen sıcaklık değeri 30 ile 40 derece arasında ise **turuncu** renkli tehlike ledimiz yanar, sistem uyarısı **Ürün tahliyesi gerekebilir, personeli bilgilendirin.** şeklinde görülür.  Soğutucular ise **2.kademede çalışıyorlar** olarak görülür. Personel bilgilendirmesi için otomatik olarak bir mail gönderilir.
  - Eğer ölçülen sıcaklık değeri 40 derecenin üstünde ise **kırmızı** renkli tehlike ledimiz yanar, sistem uyarısı **Ürün tahliyesi gerekmekte, tahliye protokolünü etkinleştirin.** olarak görülür. Soğutucular ise **3.kademede çalışıyorlar** olarak görülür. Alarm aktif hale geldiğinden alarm **Aktif** yazısı görülür. Tahliye protokolünün etkinleştirildiğini bildiren otomatik bir mail gönderilir.
# Malzemeler
 - 1 x Arduino UNO
 - 1 x Breadboard
 - 1 x LM35 sıcaklık sensörü
 - 3 adet erkek-erkek jumper kablo
 - 
Tahliye gerekebilir maili:

![gerekebilir]()

Tahliye protokolü etkin maili:

![tahliye]()

Çalışma anında arayüzden bir kesit:

![ornek](https://github.com/umuturhn/Depo-sicaklik-kontrol/blob/main/proje%20dosyalar%C4%B1/foto%C4%9Fraflar/ornek.png)
