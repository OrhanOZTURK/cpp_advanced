template<typename Iter, typename Init>
Init Accumulate1(Iter beg, Iter end, Init init)
{
	while (beg != end)
	{
		init = std::move(init) + *beg;
		++beg;
	}
	return init;
}

----------------------------------------------------------------------------------------------------
  
template<typename Iter, typename SenType, typename Init, typename Op = std::plus<>>
Init Accumulate2(Iter beg, SenType end, Init init, Op op = {})
{
	while (beg != end)
	{
		init = op(std::move(init), *beg);
		++beg;
	}
	return init;
}

----------------------------------------------------------------------------------------------------
  
  
template<typename Iter, typename SenType, typename Init, typename Op = std::plus<>>
requires std::input_iterator<Iter> && std::sentinel_for<Iter, SenType>
Init Accumulate3(Iter beg, SenType end, Init init, Op op = {})
{
	while (beg != end)
	{
		init = op(std::move(init), *beg);
		++beg;
	}
	return init;
}

----------------------------------------------------------------------------------------------------
  
template<std::input_iterator Iter, std::sentinel_for<Iter> SenType, typename Init, typename Op = std::plus<>>
Init Accumulate4(Iter beg, SenType end, Init init, Op op = {})
{
	while (beg != end)
	{
		init = op(std::move(init), *beg);
		++beg;
	}
	return init;
}

----------------------------------------------------------------------------------------------------
  
template<std::input_iterator Iter, std::sentinel_for<Iter> SenType, typename Init, typename Op = std::plus<>>
Init Accumulate5(Iter beg, SenType end, Init init, Op op = {})
{
	while (beg != end)
	{
		init = std::invoke(op, std::move(init), *beg);
		++beg;
	}
	return init;
}
  
----------------------------------------------------------------------------------------------------
  
template<std::input_iterator Iter, std::sentinel_for<Iter> SenType, typename Init = std::iter_value_t<Iter>, typename Op = std::plus<>>
Init Accumulate6(Iter beg, SenType end, Init init = Init{}, Op op = {})
{
	while (beg != end)
	{
		init = std::invoke(op, std::move(init), *beg);
		++beg;
	}
	return init;
}
