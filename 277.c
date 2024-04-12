void fun()
{
  int entity_7 = 99;
  entity_7 = 42;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  char entity_0 = 't';
  memset(entity_1, 'E', entity_7-1);
  entity_1[entity_7-1]='';
  entity_1[33] = 'T';
}