// Copyright 2024 openGemini Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef OPENGEMINI_IMPL_CLI_DATABASE_PING_HPP
#define OPENGEMINI_IMPL_CLI_DATABASE_PING_HPP

#include "opengemini/impl/cli/Functor.hpp"
#include "opengemini/impl/util/Preprocessor.hpp"

namespace opengemini::impl::cli {

struct RunPing : public Functor {
    std::string operator()(boost::asio::yield_context yield) const;

    std::size_t index_;
};

} // namespace opengemini::impl::cli

#ifndef OPENGEMINI_SEPARATE_COMPILATION
#    include "opengemini/impl/cli/database/Ping.cpp"
#endif // !OPENGEMINI_SEPARATE_COMPILATION

#endif // !OPENGEMINI_IMPL_CLI_DATABASE_PING_HPP