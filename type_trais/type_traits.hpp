#ifndef TYPE_TRAITS_HPP
#define TYPE_TRAITS_HPP

#include <iostream>


namespace ft
{
//enable_if
template <bool, class _Tp = void>
struct  enable_if {};

template <class _Tp> 
struct enable_if<true, _Tp> 
{
	typedef _Tp type;
};


//is_integral

template <typename T>
struct is_integral 
{
	static const bool value = false; 
};
template <>
struct is_integral<int> 
{
	static const bool value = true;
};
template <>
struct is_integral<bool> 
{
	static const bool value = true;
};
template <>
struct is_integral<char> 
{
	static const bool value = true;
};
template <>
struct is_integral<signed char> 
{
	static const bool value = true;
};
template <>
struct is_integral<unsigned char> 
{
	static const bool value = true;
};
template <>
struct is_integral<wchar_t> 
{
	static const bool value = true;
}; // wide char can take on 65536 values 
template <>
struct is_integral<short> // used for small integers (range -32768 to 32767)
{
	static const bool value = true;
};
template <>
struct is_integral<unsigned short	> {static const bool value = true;};
template <>
struct is_integral<unsigned int	> {static const bool value = true;};
template <>
struct is_integral<long> {static const bool value = true;};
template <>
struct is_integral<unsigned long> {  static const bool value = true;};
template <>
struct is_integral<long long> {  static const bool value = true;};
template <>
struct is_integral<unsigned long long> {  static const bool value = true;};
template <>
struct is_integral<float> {  static const bool value = true;};
template <>
struct is_integral<double> {  static const bool value = true;};
template <>
struct is_integral<long double> {  static const bool value = true;};

}






#endif