#ifndef STREAM_H
#define STREAM_H
class Stream
{
public:
	Stream();
	~Stream();
};

extern Stream& gstream; // global stream object

static struct StreamInitializer {  // gstreamInitializer türünden nesne yaratılmış. Internal linkagea ait bu.static var çünkü
				  // herhangibir kod dosyası bu header file ı include ettiğinde her kaynak dosya bir tane
				  // internal linkageda bir tane struct streamInitializer türünden değişken tanımlayacak.
	StreamInitializer();
	~StreamInitializer();
} gstreamInitializer;

#endif
