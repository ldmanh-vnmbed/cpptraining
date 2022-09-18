#define get_(type, var) \
   public:              \
    type get_##var() {  \
        return var;     \
    }

#define set_(type, var)  \
   private:              \
    type var;            \
                         \
   public:               \
    void set_##var() {   \
        this->var = var; \
    }