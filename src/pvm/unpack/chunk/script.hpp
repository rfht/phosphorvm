#pragma once

#include "pvm/unpack/chunk/common.hpp"

struct ScriptDefinition
{
	std::string name;
	s32 id;

	void debug_print() const
	{
		fmt::print("\tScript #{:5<}: '{}'\n", id, name);
	}
};

using Scpt = ListChunk<ScriptDefinition>;

inline void user_reader(ScriptDefinition& def, Reader& reader)
{
	reader
		>> string_reference(def.name)
		>> def.id;
}
