// Copyright (c) 2016 RISC Software GmbH
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

#include "CPACSPointXYZ.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "TixiHelper.h"

namespace tigl
{
    namespace generated
    {
        CPACSPointXYZ::CPACSPointXYZ(CTiglUIDManager* uidMgr) :
            m_uidMgr(uidMgr) {}
        
        CPACSPointXYZ::~CPACSPointXYZ()
        {
            if (m_uidMgr && m_uID) m_uidMgr->TryUnregisterObject(*m_uID);
        }
        
        CTiglUIDManager& CPACSPointXYZ::GetUIDManager()
        {
            return *m_uidMgr;
        }
        
        const CTiglUIDManager& CPACSPointXYZ::GetUIDManager() const
        {
            return *m_uidMgr;
        }
        
        void CPACSPointXYZ::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read attribute uID
            if (tixihelper::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
                m_uID = tixihelper::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
            }
            
            // read element x
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/x")) {
                m_x = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/x");
            }
            else {
                LOG(ERROR) << "Required element x is missing at xpath " << xpath;
            }
            
            // read element y
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/y")) {
                m_y = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/y");
            }
            else {
                LOG(ERROR) << "Required element y is missing at xpath " << xpath;
            }
            
            // read element z
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/z")) {
                m_z = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/z");
            }
            else {
                LOG(ERROR) << "Required element z is missing at xpath " << xpath;
            }
            
            if (m_uidMgr && m_uID) m_uidMgr->RegisterObject(*m_uID, *this);
        }
        
        void CPACSPointXYZ::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write attribute uID
            if (m_uID) {
                tixihelper::TixiSaveAttribute(tixiHandle, xpath, "uID", *m_uID);
            } else {
                if (tixihelper::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
                    tixihelper::TixiRemoveAttribute(tixiHandle, xpath, "uID");
                }
            }
            
            // write element x
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/x");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/x", m_x);
            
            // write element y
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/y");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/y", m_y);
            
            // write element z
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/z");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/z", m_z);
            
        }
        
        const boost::optional<std::string>& CPACSPointXYZ::GetUID() const
        {
            return m_uID;
        }
        
        void CPACSPointXYZ::SetUID(const std::string& value)
        {
            if (m_uidMgr) {
                if (m_uID) m_uidMgr->TryUnregisterObject(*m_uID);
                m_uidMgr->RegisterObject(value, *this);
            }
            m_uID = value;
        }
        
        void CPACSPointXYZ::SetUID(const boost::optional<std::string>& value)
        {
            if (m_uidMgr) {
                if (m_uID) m_uidMgr->TryUnregisterObject(*m_uID);
                if (value) m_uidMgr->RegisterObject(*value, *this);
            }
            m_uID = value;
        }
        
        const double& CPACSPointXYZ::GetX() const
        {
            return m_x;
        }
        
        void CPACSPointXYZ::SetX(const double& value)
        {
            m_x = value;
        }
        
        const double& CPACSPointXYZ::GetY() const
        {
            return m_y;
        }
        
        void CPACSPointXYZ::SetY(const double& value)
        {
            m_y = value;
        }
        
        const double& CPACSPointXYZ::GetZ() const
        {
            return m_z;
        }
        
        void CPACSPointXYZ::SetZ(const double& value)
        {
            m_z = value;
        }
        
    }
}
