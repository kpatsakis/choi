void fun()
{
  int entity_3 = 95;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  memset(entity_1, 'Y', entity_3-1);
  entity_1[entity_3-1]='';
  entity_1[83] = 't';
}