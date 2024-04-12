void fun()
{
  int entity_4 = 62;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  memset(entity_5, 'W', entity_4-1);
  entity_5[entity_4-1]='';
  entity_5[61] = 'U';
}