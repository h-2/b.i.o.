// -----------------------------------------------------------------------------------------------------
// Copyright (c) 2006-2020, Knut Reinert & Freie Universität Berlin
// Copyright (c) 2016-2020, Knut Reinert & MPI für molekulare Genetik
// This file may be used, modified and/or redistributed under the terms of the 3-clause BSD-License
// shipped with this file and also available at: https://github.com/seqan/seqan3/blob/master/LICENSE.md
// -----------------------------------------------------------------------------------------------------

/*!\file
 * \brief Stream concepts.
 * \author Rene Rahn <rene.rahn AT fu-berlin.de>
 */

#pragma once

#include <concepts>
#include <iosfwd>
#include <type_traits>

#include <bio/platform.hpp>

namespace bio
{

template <typename stream_type, typename char_type = char>
concept movable_istream = std::derived_from<stream_type, std::basic_istream<char_type>> && std::movable<stream_type>;

template <typename stream_type, typename char_type = char>
concept movable_ostream = std::derived_from<stream_type, std::basic_ostream<char_type>> && std::movable<stream_type>;

} // namespace bio
