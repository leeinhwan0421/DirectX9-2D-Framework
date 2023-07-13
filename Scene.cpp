#include "Header.h"

void Scene::Update(float _deltaTime)
{
	obm.Update(_deltaTime);
	obum.Update(_deltaTime);
	OnUpdate(_deltaTime);
}

void Scene::FixedUpdate(float _fixedDeltaTime)
{
	obm.FixedUpdate(_fixedDeltaTime);
	obum.FixedUpdate(_fixedDeltaTime);
	OnFixedUpdate(_fixedDeltaTime);
}

void Scene::Render()
{
	obm.Render();
	OnRender();
}

void Scene::UiRender()
{
	obum.Render();
	OnUiRender();
}

SceneManager::SceneManager()
{
}

Scene* SceneManager::GetActiveScene()
{
	return curScene;
}

void SceneManager::AddScene(const std::wstring& _name, Scene* _newScene)
{
	auto sf = sceneMap.find(_name);
	if (sf != sceneMap.end())
		RemoveScene(_name);

	sceneMap.insert(make_pair(_name, _newScene));
}

void SceneManager::ChangeScene(const std::wstring& _name)
{
	auto sf = sceneMap.find(_name);
	if (sf != sceneMap.end())
		nextScene = sf->second;
}

void SceneManager::RemoveScene(const std::wstring& _name)
{
	auto sf = sceneMap.find(_name);
	if (sf != sceneMap.end())
	{
		delete sf->second;
		sceneMap.erase(_name);
	}
}

void SceneManager::Update(float _deltaTime)
{
}

void SceneManager::FixedUpdate(float _fixedDeltaTime)
{
	if (curScene)
		curScene->FixedUpdate(_fixedDeltaTime);
}

void SceneManager::Render()
{
	if (curScene)
		curScene->Render();
}

void SceneManager::UiRender()
{
	if (curScene)
		curScene->UiRender();
}
