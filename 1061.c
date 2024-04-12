void fun()
{
  int entity_5 = 30;
  char entity_6[58] = "";
  entity_6 = NULL;
  char entity_7[15] = "";
  entity_7 = NULL;
  memset(entity_6, 'C', 58-1);
  entity_6[58-1]='';
  memset(entity_7, 'h', 15-1);
  entity_7[15-1]='';
  entity_5 = 96;
  entity_6[entity_5] = 'Q';
}