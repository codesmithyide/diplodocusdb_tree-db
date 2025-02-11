/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/diplodocusdb/embedded-document-db/blob/main/LICENSE.txt
*/

#ifndef GUARD_DIPLODOCUSDB_EMBEDDEDDOCUMENTDB_STORAGEENGINE_SIBLINGNODERECORDGROUP_HPP
#define GUARD_DIPLODOCUSDB_EMBEDDEDDOCUMENTDB_STORAGEENGINE_SIBLINGNODERECORDGROUP_HPP

#include "NodeID.hpp"
#include <DiplodocusDB/Core.hpp>
#include <string>

namespace DiplodocusDB
{
namespace EDDBImpl
{

class SiblingNodeRecordGroup
{
public:
    SiblingNodeRecordGroup();
    SiblingNodeRecordGroup(std::string name, NodeID nodeID);
    SiblingNodeRecordGroup(std::string name, Value value, NodeID nodeID);

    const std::string& name() const;
    const Value& value() const;
    Value& value();
    bool isRoot() const;
    const NodeID& nodeID() const;

private:
    std::string m_name;
    Value m_value;
    NodeID m_nodeID;
};

}
}

#endif
