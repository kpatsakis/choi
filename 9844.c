void fun()
{
  int entity_2 = 41;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  memset(entity_6, 'r', entity_2-1);
  entity_6[entity_2-1]='';
  entity_2 = 42;
  entity_6[19] = 't';
}