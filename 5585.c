void fun()
{
  int entity_1 = 38;
  char entity_4[100] = "";
  entity_4 = NULL;
  memset(entity_4, 'Z', 100-1);
  entity_4[100-1]='';
  entity_4[entity_1] = 'Q';
}