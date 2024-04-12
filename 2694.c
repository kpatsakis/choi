void fun()
{
  int entity_8 = 91;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  memset(entity_1, 'n', entity_8-1);
  entity_1[entity_8-1]='';
  entity_1[4] = 'w';
}