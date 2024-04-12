void fun()
{
  int entity_1 = 18;
  char entity_4[38] = "";
  entity_4 = NULL;
  char entity_6[30] = "";
  entity_6 = NULL;
  char entity_8 = 'Q';
  memset(entity_6, 'z', 30-1);
  entity_6[30-1]='';
  memset(entity_4, 'h', 38-1);
  entity_4[38-1]='';
  entity_1 = 46;
  entity_4[entity_1] = 'u';
}