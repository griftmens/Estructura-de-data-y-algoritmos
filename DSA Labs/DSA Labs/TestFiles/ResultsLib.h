#pragma once

// ResultsLib.h - Contains declaration of Results functions

#ifdef RESULTSLIB_EXPORTS
#define RESULTSLIB_API __declspec(dllexport)
#else
#define RESULTSLIB_API __declspec(dllimport)
#endif

namespace results {

	extern "C" RESULTSLIB_API void WriteResults(const char* _codeFile, const char* _resultsFile);
}