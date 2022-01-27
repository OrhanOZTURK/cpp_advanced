#include<ranges>
#include<vector>
#include<iostream>
#include<algorithm>

[[nodiscard]] constexpr bool is_palindrome(const std::string_view sv)
{
    auto first_part = sv | std::views::take(sv.size() / 2); // yarısını aldık
    auto second_part = sv | std::views::reverse | std::views::take(sv.size() / 2);
    return std::ranges::equal(first_part,second_part); // ve bunları kıyasladık.
}

int main()
{
    constexpr auto b = is_palindrome("ey edip adanada pide ye"); //  true
    constexpr auto c = is_palindrome("parahaziramarizaharap"); //  true
    constexpr auto d = is_palindrome("ananacidedenededicanana"); //  true
}
