// INCLUDES STD

// INCLUDES SFML

// INCLUDES
#include "Tensor.hxx"



template <typename T, size_t dim>
Tensor<T,dim>::~Tensor()
{
    
}

template <typename T, size_t dim>
const T& Tensor<T,dim>::operator()(const std::initializer_list<size_t>& index) const
{
    short sizeIndex {0};
    for (auto& elem : index)
        sizeIndex++;
    switch (sizeIndex)
    {
    case 1:
        return _data[index[0]];
        break;
    case dim:        
        size_t i {0};
        for (auto it = index.end()-1;it)
            i += elem;
        return _data[index[0]];
        break;
    default:
        break;
    }
}

template <typename T, size_t dim>
std::ostream& operator<< (std::ostream& stream, const Tensor<T, dim>& t)
{
    for (int i {0}; i < t._size; ++i)
        for (int j {0}; j < t._size; ++j)
            for (int k {0}; k < t._size; ++k)
                stream << t(i, j, k) << " ";
}