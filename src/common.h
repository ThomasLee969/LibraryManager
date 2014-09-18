#ifndef COMMON_H_
#define COMMON_H_

#include <exception>
#include <memory>
#include <string>

namespace library_manager {

typedef std::uint_least32_t UserID;
typedef std::uint_least64_t ISBN;
typedef std::string CopyID;
typedef std::uint_least64_t PhoneNum;
typedef std::string CallNum;
enum class User { READER, ADMIN };

class ExitProgram : public std::exception
{
 public:
    explicit ExitProgram(int return_value)
        : return_value_(return_value) {}
    int return_value() const { return return_value_; }
 private:
    int return_value_;
};


const int kLoanPeriod = 90;

}  // namespace library_manager

#endif  // COMMON_H_
