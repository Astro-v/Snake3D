#ifndef __TENSOR_HXX__
#define __TENSOR_HXX__
#pragma once

// INCLUDES STD
#include <memory>

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
     * @param i First index.
     * @param j Second index.
     * @param k Third index.
     * 
     * @return Return a constant reference over the (i, j, k)th element.
     *
     */
    const T& operator()(size_t i, size_t j, size_t k) const { return _data[i + _size * (j + size * k)];}

    /**
     * @brief Non-const accessor for the element (i, j, k).
     * 
     * @param i First index.
     * @param j Second index.
     * @param k Third index.
     * 
     * @return Return a reference over the (i, j, k)th element.
     *
     */
    T& operator()(size_t i, size_t j, size_t k) { return _data[i + _size * (j + size * k)];}

private:
    size_t _size {dim};

    std::unique_ptr<T[]> _data {new T[dim * dim * dim]};
    //std::unique_ptr<T[]> _data {std::make_unique<T[]>(dim * dim * dim)};
};

#endif // __TENSOR_HXX__