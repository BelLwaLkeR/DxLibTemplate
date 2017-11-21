#pragma once

//基本的なアプリケーションをつかさどるクラス
class Application{
public:
	Application();
	~Application();
	void Run();

protected:
	virtual void Setup();
	virtual void Initialize();
	virtual void Update();
	virtual void Draw();
	virtual void Finalize();
	void Exit();

private:
	bool isEnd;


};
