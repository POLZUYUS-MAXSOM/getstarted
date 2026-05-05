
    #pragma once

    using namespace System;
    using namespace System::Windows::Forms;

    namespace Project4
    {
        ref class MyForm;
        inline void SetRussianLanguage(MyForm^ form);
    }
    namespace Project4
    {
        public interface class IMyForm
        {
            property Label^ form_name {
                Label^ get();
            }
        };
        inline void SetRussianLanguage(MyForm^ form)
        {
            IMyForm^ myForm = safe_cast<IMyForm^>(form);
            myForm->form_name->Text = "добро пожаловать в windows";
        }
    }