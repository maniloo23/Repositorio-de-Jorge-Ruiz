using System.Xml;

namespace Archivos_XML
{
    class Program
    {

        static void Main(string[] args)
        {
            //UsingXmlWriter();
            UsingXmlDocument();
        }
        private static void UsingXmlWriter()
        {
            XmlWriter xmlwriter = XmlWriter.Create("usingXmlWriter.xml");

            xmlwriter.WriteStartDocument();

            xmlwriter.WriteStartElement("Contacts");
            xmlwriter.WriteStartElement("Contact");
            xmlwriter.WriteAttributeString("Phone", "02837423");
            xmlwriter.WriteString("Jorge Ruiz");
            xmlwriter.WriteEndElement();

            xmlwriter.WriteStartElement("Contact");
            xmlwriter.WriteAttributeString("Phone", "02938409");
            xmlwriter.WriteAttributeString("Work Phone", "0939840");
            xmlwriter.WriteString("Paul T. Anderson");

            xmlwriter.WriteEndDocument();
            xmlwriter.Close();
        }

        private static void UsingXmlDocument()
        { 
            XmlDocument xmlDoc = new XmlDocument();
            XmlNode rootNode = xmlDoc.CreateElement("Contacts");
            xmlDoc.AppendChild(rootNode);

            XmlNode contactNode = xmlDoc.CreateElement("Contact");
            XmlAttribute attribute = xmlDoc.CreateAttribute("Phone");
            attribute.Value = "0208328";
            contactNode.AppendChild(attribute);
            contactNode.InnerText = "Jorge Ruiz";
            rootNode.AppendChild(contactNode);

            contactNode = xmlDoc.CreateElement("Contact");
            attribute = xmlDoc.CreateAttribute("Phone");
            attribute.Value = "0204929";
            contactNode.AppendChild(attribute);
            attribute = xmlDoc.CreateAttribute("Work_Phone");
            attribute.Value = "09019401";
            contactNode.AppendChild(attribute);

            contactNode.InnerText = "Pablo Peralta";
            rootNode.AppendChild(contactNode);

            xmlDoc.Save("usingSmlDocument22.xml");
        }
    }
}

