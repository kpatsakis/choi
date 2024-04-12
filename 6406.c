void fun()
{
  int entity_4 = 44;
  char entity_1[60] = "";
  entity_1 = NULL;
  memset(entity_1, 'H', 60-1);
  entity_1[60-1]='';
  entity_1[entity_4] = 'c';
}