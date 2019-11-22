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

#include <CCPACSMaterialDefinition.h>
#include <string>
#include <tixi.h>
#include "CPACSCap.h"
#include "CPACSPointX.h"
#include "CTiglUIDObject.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;
class CCPACSWingRibCrossSection;

namespace generated
{
    // This class is used in:
    // CPACSWingRibCrossSection

    // generated from /xsd:schema/xsd:complexType[964]
    /// @brief Definition of a ribCell
    /// 
    /// RibCells are optional elements. They are defined via a
    /// fromRib and a toRib. The enumeration is within the ribSet.
    /// RibNumber 1 starts at etaStart.
    /// 
    class CPACSWingRibCell : public CTiglReqUIDObject
    {
    public:
        TIGL_EXPORT CPACSWingRibCell(CCPACSWingRibCrossSection* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSWingRibCell();

        TIGL_EXPORT CCPACSWingRibCrossSection* GetParent();

        TIGL_EXPORT const CCPACSWingRibCrossSection* GetParent() const;

        TIGL_EXPORT virtual CTiglUIDObject* GetNextUIDParent();
        TIGL_EXPORT virtual const CTiglUIDObject* GetNextUIDParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::string& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const std::string& value);

        TIGL_EXPORT virtual const std::string& GetFromRib() const;
        TIGL_EXPORT virtual void SetFromRib(const std::string& value);

        TIGL_EXPORT virtual const std::string& GetToRib() const;
        TIGL_EXPORT virtual void SetToRib(const std::string& value);

        TIGL_EXPORT virtual const CPACSPointX& GetRibRotation() const;
        TIGL_EXPORT virtual CPACSPointX& GetRibRotation();

        TIGL_EXPORT virtual const CCPACSMaterialDefinition& GetMaterial() const;
        TIGL_EXPORT virtual CCPACSMaterialDefinition& GetMaterial();

        TIGL_EXPORT virtual const CPACSCap& GetUpperCap() const;
        TIGL_EXPORT virtual CPACSCap& GetUpperCap();

        TIGL_EXPORT virtual const CPACSCap& GetLowerCap() const;
        TIGL_EXPORT virtual CPACSCap& GetLowerCap();

    protected:
        CCPACSWingRibCrossSection* m_parent;

        CTiglUIDManager* m_uidMgr;

        std::string              m_uID;

        /// Defines the beginning of the ribCell. The
        /// enumeration is within the ribSet.
        std::string              m_fromRib;

        /// Defines the ending of the ribCell. The
        /// enumeration is within the ribSet.
        std::string              m_toRib;

        /// WING: The Rotation along the x describes a
        /// rotation around a line, that is defined by the intersection of
        /// the rib with the wing middle plane (orientated from leading to
        /// trailing edge). This angle defaults to 90° which means, that the
        /// rib is perpendicular on the wings middle plane. PYLON: The
        /// Rotation along the z describes a rotation around the pylons
        /// z-axis (= rotation in top view). This angle defaults to 90°
        /// which means, that the rib is perpendicular to the pylons x-axis.
        CPACSPointX              m_ribRotation;

        /// The orthotropyDirection is defined as rotation
        /// around the ribs z-axis. The rib coordinate system is defined as
        /// follows: x-axis is from leading to trailingeEdge of the
        /// componentSegment in the direction of the rib elongation. z-axis
        /// is normal to the rib in the direction of positive eta. y is
        /// defined by right hand rule. Rotation is around the z-axis. Zero
        /// degrees are at the x-axis positive direction.
        CCPACSMaterialDefinition m_material;

        CPACSCap                 m_upperCap;

        CPACSCap                 m_lowerCap;

    private:
        CPACSWingRibCell(const CPACSWingRibCell&) = delete;
        CPACSWingRibCell& operator=(const CPACSWingRibCell&) = delete;

        CPACSWingRibCell(CPACSWingRibCell&&) = delete;
        CPACSWingRibCell& operator=(CPACSWingRibCell&&) = delete;
    };
} // namespace generated

// Aliases in tigl namespace
using CCPACSWingRibCell = generated::CPACSWingRibCell;
} // namespace tigl
