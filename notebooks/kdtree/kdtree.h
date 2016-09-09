#include <vector>

typedef std:vector

template <size_t N, typename ElemType> 
class KDTree
{
public:
    KDTree();
    ~KDTree();

    size_t dimension() const;
    size_t size() const;
    bool empty() const;

    void insert(const Point<N>& pt, const ElemType& value);
    bool contains(const Point<N>& pt) const;

    ElemType& operator[] (const Point<N>& pt);
    ElemType& at(const Point<N>& pt);
    const ElemType& at(const Point<N>& pt) const;
};
