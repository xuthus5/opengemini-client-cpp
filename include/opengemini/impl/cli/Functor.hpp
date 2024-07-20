//
// Copyright 2024 Huawei Cloud Computing Technologies Co., Ltd.
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
//

#ifndef OPENGEMINI_IMPL_CLI_FUNCTOR_HPP
#define OPENGEMINI_IMPL_CLI_FUNCTOR_HPP

#include "opengemini/impl/ClientImpl.hpp"

#include "opengemini/Query.hpp"

namespace opengemini::impl {

struct ClientImpl::Functor {
    struct RunPing {
        ClientImpl* impl_;
        std::size_t index_;

        std::string operator()(boost::asio::yield_context yield) const;
    };

    struct RunQueryGet {
        ClientImpl*  impl_;
        struct Query query_;

        QueryResult operator()(boost::asio::yield_context yield) const;
    };
};

} // namespace opengemini::impl

#endif // !OPENGEMINI_IMPL_CLI_FUNCTOR_HPP