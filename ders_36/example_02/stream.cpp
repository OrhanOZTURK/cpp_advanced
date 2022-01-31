#include"stream.h"
#include<new> 
#include<iostream> 
#include<type_traits> 

static int g_nifty_counter;  
static std::aligned_storage_t<sizeof(Stream), alignof(Stream)> g_stream_buffer;

Stream& stream = reinterpret_cast<Stream&>(g_stream_buffer); 

Stream::Stream()
{
	//initialize things....
}
Stream::~Stream()
{
	//clean up
}
StreamInitializer::StreamInitializer()
{
	if (g_nifty_counter++ == 0)  
		new(&stream)Stream(); 

	std::cout << g_nifty_counter << '\n';
}
StreamInitializer::~StreamInitializer()
{
	if (--g_nifty_counter == 0)
		(&stream)->~Stream();

	std::cout << g_nifty_counter << '\n';
}
