#pragma once

#include "pvm/bc/enums.hpp"
#include "pvm/bc/types.hpp"
#include "pvm/vm/string.hpp"
#include "pvm/vm/traits/common.hpp"

template<class T>
class data_type_for
{
	static constexpr auto value_deducer() noexcept
	{
		if constexpr (std::is_same_v<T, s16>) { return DataType::i16; }
		if constexpr (std::is_same_v<T, s32>) { return DataType::i32; }
		if constexpr (std::is_same_v<T, s64>) { return DataType::i64; }
		if constexpr (std::is_same_v<T, f32>) { return DataType::f32; }
		if constexpr (std::is_same_v<T, f64>) { return DataType::f64; }
		if constexpr (std::is_same_v<T, StringReference>) { return DataType::str; }
		return DataType::var;
	}

public:
	static constexpr DataType value = value_deducer();
};
