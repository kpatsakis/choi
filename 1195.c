void fun()
{
  int entity_1 = 69;
  entity_1 = 63;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char entity_9 = 'U';
  memset(entity_5, 'V', entity_1-1);
  entity_5[entity_1-1]='';
  entity_5[86] = 'a';
}