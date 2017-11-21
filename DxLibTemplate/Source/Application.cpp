#include <DxLib.h>
#include "Application.h"

Application::Application() :isEnd(false) {
}

Application::~Application(){
}

void Application::Run(){
	Setup();
	Initialize();
	while (!isEnd && ProcessMessage() == 0) {	//isEnd��true�ɂȂ邩�A�A�v���P�[�V�������I���ɂȂ�܂ŃQ�[�����[�v���J��Ԃ��B
		Update();
		Draw();
	}
	Finalize();
}

void Application::Setup() {
	//�E�B���h�E���[�h�Ŏ��s
	ChangeWindowMode(TRUE);

	//�𑜓x��ύX�B
	SetGraphMode(1280, 720, 32);

	//DxLib�̏������B
	DxLib_Init();
}

void Application::Initialize(){
	//������
}

void Application::Update(){
	//Escape�L�[����������Q�[���I��
	isEnd |= CheckHitKey(KEY_INPUT_ESCAPE);		

	//�ȉ��ɍX�V�����������Ă��������B
}

void Application::Draw(){
	//�ȉ��ɕ`�揈���������Ă��������B
}

void Application::Finalize(){
	DxLib_End();
}

void Application::Exit() {
	isEnd = true;
}
