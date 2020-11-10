//TAFFO custom code
// is this correct?
#ifndef LLVM_CLANG_SEMA_TAFFOHINT_H
#define LLVM_CLANG_SEMA_TAFFOHINT_H

#include "clang/Basic/IdentifierTable.h"
#include "clang/Basic/SourceLocation.h"
#include "clang/Sema/ParsedAttr.h"
#include "clang/Sema/Ownership.h"

namespace clang {
struct TaffoHint {
  SourceRange Range;
  IdentifierLoc *PragmaNameLoc; // name of the pragma
  IdentifierLoc *TOptionLoc; //target option we are applying
  IdentifierLoc *BTOptionLoc; //backtracking option we are applying
  Expr *ValueExprV; //nome of the variable
  Expr *ValueExprT;
  Expr *ValueExprBT;

  TaffoHint()
      : PragmaNameLoc(nullptr), VariableNameLoc(nullptr), TOptionLoc(nullptr), 
      BTOptionLoc(nullptr), ValueExprT(nullptr), ValueExprBT(nullptr) {}
};

}
#endif // LLVM_CLANG_SEMA_TAFFOHINT_H
