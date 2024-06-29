// DataDistributor.h
template <typename T>
class DataDistributor {
public:
    virtual void distributeData(const T& data) = 0;
    virtual ~DataDistributor() = default;
};
