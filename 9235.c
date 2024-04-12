void fun()
{
  int entity_1 = 52;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  memset(entity_4, 'Y', entity_1-1);
  entity_4[entity_1-1]='';
  entity_4[51] = 'U';
}