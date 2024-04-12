void fun()
{
  int entity_6 = 85;
  char entity_1[81] = "";
  entity_1 = NULL;
  memset(entity_1, 'h', 81-1);
  entity_1[81-1]='';
  entity_1[entity_6] = 'Z';
}