#pragma once

#include <memory>
#include <ostream>
#include <string_view>

namespace aoc {

class AbstractSolver {
public:
    static std::unique_ptr<AbstractSolver> create();
    virtual void parse_input(std::string_view input) = 0;
    virtual void part1(std::ostream& ostr) const = 0;
    virtual void part2(std::ostream& ostr) const = 0;
};

} // namespace aoc
