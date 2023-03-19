#ifndef __TENSOR_HXX__
#define __TENSOR_HXX__
#pragma once

// INCLUDES STD
#include <memory>
#include <iostream>
#include <initializer_list>

// INCLUDES SFML

// INCLUDES

/**
 * @brief Class for creating tensor like object. The element in the tensor are typed T. The tensor is of dimention dim.
 * It create a constant size array.
 *
 */
template <typename T, size_t dim>
class Tensor
{
public: 
    /**
     * @brief Default constructor.
     *
     */
    Tensor() = default;

    /**
     * @brief Default destructor.
     *
     */
    virtual ~Tensor();

    /**
     * @brief Const accessor for the element (i, j, k).
     * 
     * @param index Initializer_list of indexes.
     * 
     * @return Return a constant reference over the (i, j, k)th element.
     *
     */
    const T& operator()(const std::initializer_list<size_t>& index) const;

    /**
     * @brief Non-const accessor for the element (i, j, k).
     * 
     * @param index Initializer_list of indexes
     * 
     * @return Return a reference over the (i, j, k)th element.
     *
     */
    T& operator()(const std::initializer_list<size_t>& index);

    /**
     * @brief Overload of the output stream operator.
     * 
     * @param stream Output stream references.
     * @param t Tensor.
     * 
     * @return Return a reference over the input stream.
     *
     */
    friend std::ostream& operator<< (std::ostream& stream, const Tensor<T, dim>& t);

private:
    size_t _size {dim};

    std::unique_ptr<T[]> _data {new T[dim * dim * dim]};
    //std::unique_ptr<T[]> _data {std::make_unique<T[]>(dim * dim * dim)};
};



#endif // __TENSOR_HXX__