void fun()
{
  int entity_7 = 56;
  int entity_1 = 90;
  char entity_4[76] = "";
  entity_4 = NULL;
  char entity_8[70] = "";
  entity_8 = NULL;
  memset(entity_4, 'f', 76-1);
  entity_4[76-1]='';
  memset(entity_8, 'l', 70-1);
  entity_8[70-1]='';
  entity_8[entity_7] = 'i';
}