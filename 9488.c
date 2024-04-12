void fun()
{
  int entity_3 = 1;
  entity_3 = 23;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  memset(entity_1, 'Q', entity_3-1);
  entity_1[entity_3-1]='';
  entity_1[23] = 'U';
}