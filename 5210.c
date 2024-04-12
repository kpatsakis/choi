void fun()
{
  int entity_1 = 11;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  memset(entity_2, 'H', entity_1-1);
  entity_2[entity_1-1]='';
  entity_2[12] = 'v';
}