#### Aşağıda bildirimi yapılan fonksiyonu tanımlayınız:

```
#include <optional>
#include <string_view>

std::optional<int> to_int(std::string_view);

```

+ _to\_int_ fonksiyonu aldığı _std::string\_view_'da tutulan yazının ifade ettiği (10'luk sayı sisteminde)  tam sayı değerini döndürmeli.
+ Yazı geçerli bir tamsayı ifade etmiyorsa fonksiyon boş bir (_nullopt_ değerinde) _optional_ nesnesi döndürmeli 
+ yazının başında boşluk _(white space)_ karakterleri olabilir. 
+ Yazdığınız fonksiyonu aşağıdaki string literalleri ile test edebilirsiniz: <br>

"986235" ==> 986235 <br>
"    198725ali"   ==> 1987725 <br>
"5654 necati"   ==> 5654 <br>
"alper17"   ==> std::nullopt <br>
"   -654.752"   ==> -654 <br>
"876987123654123" ==> std::nullopt <br>

