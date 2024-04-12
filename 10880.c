void fun()
{
  char entity_4[17] = "";
  char entity_3[36] = "";
  memset(entity_3, 'V', 36-1);
  entity_3[36-1]='0';
  memset(entity_4, 'y', 17-1);
  entity_4[17-1]='0';
  entity_3[87] = 'i';
}