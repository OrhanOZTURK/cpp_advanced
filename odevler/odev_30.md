#### Aşağıda bildirimi yapılan fonksiyonu tanımlayınız:

```
#include <optional>
#include <string_view>

std::optional<int> to_int(std::string_view);

```

+ to_int fonksiyonu aldığı std::string_view'da tutulan yazının ifade ettiği (10'luk sayı sisteminde)  tam sayı değerini döndürmeli.
+ Yazı geçerli bir tamsayı ifade etmiyorsa fonksiyon boş bir (nullopt değerinde) _optional_ nesnesi döndürmeli 
+ yazının başında boşluk (white space) karakterleri olabilir. 
+ Yazdığınız fonksiyonu aşağıdaki string literalleri ile test edebilirsiniz: 
"986235" ==> 986235 <br>
"    198725ali"   ==> 1987725 <br>
"5654 necati"   ==> 5654 <br>
"alper17"   ==> std::nulopt <br>

