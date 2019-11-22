// Copyright (c) 2020 RISC Software GmbH
//
// This file was generated by CPACSGen from CPACS XML Schema (c) German Aerospace Center (DLR/SC).
// Do not edit, all changes are lost when files are re-generated.
//
// Licensed under the Apache License, Version 2.0 (the "License")
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

#pragma once

#include <string>
#include <tixi.h>
#include "CTiglUIDObject.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;

namespace generated
{
    class CPACSTransformation2D;

    // This class is used in:
    // CPACSTransformation2D

    // generated from /xsd:schema/xsd:complexType[737]
    /// @brief pointZType
    /// 
    /// Point type, containing a z data.
    /// 
    class CPACSPointZ : public CTiglReqUIDObject
    {
    public:
        TIGL_EXPORT CPACSPointZ(CPACSTransformation2D* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSPointZ();

        TIGL_EXPORT CPACSTransformation2D* GetParent();

        TIGL_EXPORT const CPACSTransformation2D* GetParent() const;

        TIGL_EXPORT virtual CTiglUIDObject* GetNextUIDParent();
        TIGL_EXPORT virtual const CTiglUIDObject* GetNextUIDParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::string& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const std::string& value);

        TIGL_EXPORT virtual const double& GetZ() const;
        TIGL_EXPORT virtual void SetZ(const double& value);

    protected:
        CPACSTransformation2D* m_parent;

        CTiglUIDManager* m_uidMgr;

        std::string m_uID;

        /// Z-Component
        double      m_z;

    private:
        CPACSPointZ(const CPACSPointZ&) = delete;
        CPACSPointZ& operator=(const CPACSPointZ&) = delete;

        CPACSPointZ(CPACSPointZ&&) = delete;
        CPACSPointZ& operator=(CPACSPointZ&&) = delete;
    };
} // namespace generated

// Aliases in tigl namespace
using CCPACSPointZ = generated::CPACSPointZ;
using CCPACSTransformation2D = generated::CPACSTransformation2D;
} // namespace tigl
