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
  IdentifierLoc *VariableNameLoc; //nome or the variable
  IdentifierLoc *TOptionLoc; //target option we are applying
  IdentifierLoc *BTOptionLoc; //backtracking option we are applying
  Expr *ValueExprT;
  Expr *ValueExprBT;
  bool BT;

  TaffoHint()
      : PragmaNameLoc(nullptr), VariableNameLoc(nullptr), TOptionLoc(nullptr), 
      BTOptionLoc(nullptr), ValueExprT(nullptr), ValueExprBT(nullptr), BT(false) {}
};

}
#endif // LLVM_CLANG_SEMA_TAFFOHINT_H
