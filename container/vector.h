//
// Created by Administrator on 10/11/2023.
//

#ifndef TINYSTL_VECTOR_H
#define TINYSTL_VECTOR_H

#include <type_traits>
#include <concepts>
namespace tinySTL {
    template<class T, class Alloc> requires
        std::same_as<typename Alloc::value_type, T>
        && std::is_copy_assignable_v<T>
        && std::is_copy_constructible_v<T>
    class vector {
    protected:

    public:
        using value_type = T;
        using allocator_type = Alloc;
        using size_type = std::size_t;
        using difference_type = std::ptrdiff_t;
        using reference = value_type&;
        using const_reference = const value_type&;

    };
}
#endif //TINYSTL_VECTOR_H
