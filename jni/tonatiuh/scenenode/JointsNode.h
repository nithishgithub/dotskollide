/*
  Copyright (C) 2015 Othon Insauste
  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.
 
  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:
  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
  Othon Insauste othonic@gmail.com
*/

#ifndef GJOINTSNODE_CLASS
#define GJOINTSNODE_CLASS

using namespace irr;
using namespace irr::core;
using namespace	irr::video;
using namespace	irr::scene;


class JointsNode : public Base2dNode
{

private:

	
	irr::video::S3DVertex*  Vertices;
	u16*		Indices;

	int frame;
	f32                 fWidth,fHeight;
    s32                 crntFrm,TotalFrm;
    s32                 stepww,stephh;
	
	int mVertexCount;
	int mIndexCount;
	int mMaxQuads;
	

	~JointsNode() // destructor
    {		
 
		delete[] Vertices;
		delete[] Indices;

    };

	b2Joint* mJointList;
	b2Vec2 mPoints[3];
	irr::video::SColor mPointColors[3];

	int mPointCount;
	int mJointCount;
	bool mClose;
public:
	
	void setPoints(b2Vec2* points, irr::video::SColor* colors, int count, bool close);

	void setJointList(b2Joint* jointList, int jointCount);

	JointsNode(scene::ISceneNode* parent, scene::ISceneManager* mgr, s32 id, int maxLines);

	virtual void render();

	 virtual void setFrame(int n)
     {
        frame = n;
     }
             

	virtual void Load(char* filename,s32 frameWidth,s32 frameHeight);
    

};

#endif