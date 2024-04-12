void fun()
{
  int entity_9 = 54;
  int entity_5 = 44;
  char entity_1[58] = "";
  entity_1 = NULL;
  memset(entity_1, 'v', 58-1);
  entity_1[58-1]='';
  entity_1[entity_5] = 'v';
}