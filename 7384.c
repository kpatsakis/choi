void fun()
{
  int entity_4 = 88;
  char entity_1[88] = "";
  entity_1 = NULL;
  memset(entity_1, 'Q', 88-1);
  entity_1[88-1]='';
  entity_1[entity_4] = 'w';
}