#include <DxLib.h>
#include "Application.h"

Application::Application() :isEnd(false) {
}

Application::~Application(){
}

void Application::Run(){
	Setup();
	Initialize();
	while (!isEnd && ProcessMessage() == 0) {	//isEndがtrueになるか、アプリケーションが終了になるまでゲームループを繰り返す。
		Update();
		Draw();
	}
	Finalize();
}

void Application::Setup() {
	//ウィンドウモードで実行
	ChangeWindowMode(TRUE);

	//解像度を変更。
	SetGraphMode(1280, 720, 32);

	//DxLibの初期化。
	DxLib_Init();
}

void Application::Initialize(){
	//初期化
}

void Application::Update(){
	//Escapeキーを押したらゲーム終了
	isEnd |= CheckHitKey(KEY_INPUT_ESCAPE);		

	//以下に更新処理を書いてください。
}

void Application::Draw(){
	//以下に描画処理を書いてください。
}

void Application::Finalize(){
	DxLib_End();
}

void Application::Exit() {
	isEnd = true;
}
