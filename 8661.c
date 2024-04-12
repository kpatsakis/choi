void fun()
{
  int entity_7 = 47;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  memset(entity_1, 'H', entity_7-1);
  entity_1[entity_7-1]='';
  entity_1[19] = 'a';
}