# Member types


all typedef in map

member type

definition

notes

key_type

The first template parameter (Key)

mapped_type

The second template parameter (T)

value_type

[pair](http://www.cplusplus.com/pair)<const key_type,mapped_type>

key_compare

The third template parameter (Compare)

defaults to: [less](http://www.cplusplus.com/less)<key_type>

value_compare

_Nested function class to compare elements_

see [value_comp](http://www.cplusplus.com/map::value_comp)

allocator_type

The fourth template parameter (Alloc)

defaults to: [allocator](http://www.cplusplus.com/allocator)<value_type>

reference

allocator_type::reference

for the default [allocator](http://www.cplusplus.com/allocator): value_type&

const_reference

allocator_type::const_reference

for the default [allocator](http://www.cplusplus.com/allocator): const value_type&

pointer

allocator_type::pointer

for the default [allocator](http://www.cplusplus.com/allocator): value_type*

const_pointer

allocator_type::const_pointer

for the default [allocator](http://www.cplusplus.com/allocator): const value_type*

[[iterator]]

a [bidirectional iterator](http://www.cplusplus.com/BidirectionalIterator) to value_type

convertible to const_iterator

const_iterator

a [bidirectional iterator](http://www.cplusplus.com/BidirectionalIterator) to const value_type

reverse_iterator

[reverse_iterator](http://www.cplusplus.com/reverse_iterator)<iterator>

const_reverse_iterator

[reverse_iterator](http://www.cplusplus.com/reverse_iterator)<const_iterator>

difference_type

a signed integral type, identical to: iterator_traits<iterator>::difference_type

usually the same as [ptrdiff_t](http://www.cplusplus.com/ptrdiff_t)

size_type

an unsigned integral type that can represent any non-negative value of difference_type

usually the same as [size_t](http://www.cplusplus.com/size_t)