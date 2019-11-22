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

#include <boost/optional.hpp>
#include <boost/utility/in_place_factory.hpp>
#include <CCPACSPointListXY.h>
#include <CCPACSSheetList.h>
#include <string>
#include <tixi.h>
#include "CTiglUIDObject.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;
class CCPACSStructuralProfiles;

namespace generated
{
    // This class is used in:
    // CPACSStructuralProfiles

    // generated from /xsd:schema/xsd:complexType[860]
    /// @brief 2-dimensional cross sections of structural profiles.
    /// 
    /// StructureProfile type, containing data of a structure
    /// profile cross sections. The cross section profile is defined by
    /// several points (->pointList) in the x-y-space. Two points are
    /// combined to one sheet (->sheetList) by using the pointUIDs.
    /// This profile is defined by several points in the
    /// x-y-space. Allways two points are combined to one sheet. The
    /// properties of each sheet are defined in the 'sheetProperties'
    /// section by referencing on the sheetUID and the material
    /// properties. The orthotropy direction of composite materials equals
    /// the x-sheet axis. The orthotropy direction angle equals a positive
    /// rotation around the z-sheet axis as indicated in the picture below
    /// (part 3.), where a wing stringer is defined as an example:
    /// @see stringer2
    /// 
    class CPACSStructuralProfile : public CTiglReqUIDObject
    {
    public:
        TIGL_EXPORT CPACSStructuralProfile(CCPACSStructuralProfiles* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSStructuralProfile();

        TIGL_EXPORT CCPACSStructuralProfiles* GetParent();

        TIGL_EXPORT const CCPACSStructuralProfiles* GetParent() const;

        TIGL_EXPORT virtual CTiglUIDObject* GetNextUIDParent();
        TIGL_EXPORT virtual const CTiglUIDObject* GetNextUIDParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::string& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const std::string& value);

        TIGL_EXPORT virtual const std::string& GetName() const;
        TIGL_EXPORT virtual void SetName(const std::string& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetDescription() const;
        TIGL_EXPORT virtual void SetDescription(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const CCPACSPointListXY& GetPointList() const;
        TIGL_EXPORT virtual CCPACSPointListXY& GetPointList();

        TIGL_EXPORT virtual const CCPACSSheetList& GetSheetList() const;
        TIGL_EXPORT virtual CCPACSSheetList& GetSheetList();

    protected:
        CCPACSStructuralProfiles* m_parent;

        CTiglUIDManager* m_uidMgr;

        std::string                  m_uID;

        /// Name of the structure profile.
        std::string                  m_name;

        /// Description of the structure profile.
        boost::optional<std::string> m_description;

        /// List of structural profile points, only x and
        /// y.
        CCPACSPointListXY            m_pointList;

        CCPACSSheetList              m_sheetList;

    private:
        CPACSStructuralProfile(const CPACSStructuralProfile&) = delete;
        CPACSStructuralProfile& operator=(const CPACSStructuralProfile&) = delete;

        CPACSStructuralProfile(CPACSStructuralProfile&&) = delete;
        CPACSStructuralProfile& operator=(CPACSStructuralProfile&&) = delete;
    };
} // namespace generated

// Aliases in tigl namespace
using CCPACSStructuralProfile = generated::CPACSStructuralProfile;
} // namespace tigl
