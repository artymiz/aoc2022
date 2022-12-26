#include "util.h"

namespace aoc {
namespace {

struct Solver : AbstractSolver {
    std::string_view input;

    void
    parse_input(std::string_view input) override {
        this->input = input;
    }

    void
    part1(std::ostream &ostr) const override {
    }

    void
    part2(std::ostream &ostr) const override {
    }

};
} // namespace

std::unique_ptr<AbstractSolver>
AbstractSolver::create() {
    return std::make_unique<Solver>();
}
} // namespace aoc
