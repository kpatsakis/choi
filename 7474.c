void fun()
{
  int entity_1 = 79;
  char entity_4[44] = "";
  entity_4 = NULL;
  memset(entity_4, 'Y', 44-1);
  entity_4[44-1]='';
  entity_4[entity_1] = 'Q';
}