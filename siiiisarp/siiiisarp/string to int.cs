using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace siiiisarp
{
    internal class string_to_int
    {
        public string realToint(string text)
        {
            int index = 0;
            int index2 = 1; //index 1 olursa eklicek index 0 olursa eklemicek
            string sayi = "0";
            char[] chars= text.ToCharArray(); //butun charlari sayiya donusturebildigi icin error vermiyor bu sebepten oturu catche yakalanmiyor
            int index3 = 0;
            
            int x;


            while (index3 < chars.Length)
            {
                
                    }

            while (index < chars.Length)
            {
                try
                {
                    while (index3 < chars.Length)
                    {
                    }
                    x = Convert.ToInt32(chars[index]);
                }
                catch (Exception er) 
                {
                    Console.WriteLine(er.GetBaseException());
                    index2 = 0;
                    index++;
                    continue;
                }

                if (index2 == 1)
                {
                    sayi = sayi + x;
                    Console.WriteLine(sayi);
                    index++;
                }
                else
                {
                    index2 = 1;
                } 
            }


            return "";
        }
    }
}
