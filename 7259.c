void fun()
{
  int entity_6 = 30;
  char entity_4[18] = "";
  entity_4 = NULL;
  memset(entity_4, 'C', 18-1);
  entity_4[18-1]='';
  entity_6 = 68;
  entity_4[entity_6] = 'Q';
}