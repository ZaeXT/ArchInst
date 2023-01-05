#include <assert.h>
#include <string>
#include <tchar.h>
#include <windows.h>
/*
    用于打开url
    高情商：综合互联网资源
    低情商：抄了不止一篇，答辩融合。
    原理懒得知道...能用就行(doge)
*/
void open_url(std::string strurl)
{
    std::string m_csFileName = std::string(strurl);
    TCHAR wc[MAX_PATH];
#ifdef UNICODE
    _stprintf_s(wc, MAX_PATH, _T("%S"), m_csFileName.c_str()); //%S宽字符
#else
    _stprintf_s(wc, MAX_PATH, _T("%s"), m_csFileName.c_str()); //%s单字符
#endif
    const TCHAR szOperation[] = _T("open");
    // const TCHAR szAddress[] = _T("url");
    int WINAPI WinMain(HINSTANCE hInst, HINSTANCE, LPSTR lpCmd, int nShow);
    {
        HINSTANCE hRslt = ShellExecute(NULL, szOperation,
                                       wc, NULL, NULL, SW_SHOWNORMAL);
        assert(hRslt > (HINSTANCE)HINSTANCE_ERROR);
        }
}