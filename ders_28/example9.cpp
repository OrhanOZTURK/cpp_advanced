template <typename T>
requires requires(T x)		//valid
{
    x + x;
}
