void fun()
{
  int entity_6 = 22;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_4, 'L', entity_6-1);
  entity_4[entity_6-1]='';
  entity_4[36] = 'Q';
}