#pragma once

#pragma warning (disable : 26495)
#pragma warning (disable : 4100)

#include <Windows.h>
#include <vector>
#include <map>
#include <string>
#include <cassert>
#include <filesystem>
#include <fstream>
#include <crtdbg.h>
#include <queue>
#include <thread>
#include <random>
#include <ctime>

// file �����ؾ���,, DirectX sdk version ����Ʈ ��Ű�� ��!!!
#include <d3d9.h>
#include <d3dx9.h>
#pragma comment (lib, "d3d9.lib")
// ���̺귯�� ���� C++ ��Ŀ ������ !!
#pragma comment (lib, "d3dx9.lib")
#pragma comment (lib, "winmm.lib")

#define SAFE_RELEASE(x) if (x) x->Release()

#include "Singleton.h"
#include "MathUtility.h"

#include "Direct3D.h"
#include "Texture.h"
#include "Sprite.h"
#include "Object.h"

#include "Scene.h"
#include "GameScene.h"
