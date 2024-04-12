void fun()
{
  int entity_7 = 84;
  entity_7 = 24;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  memset(entity_5, 'X', entity_7-1);
  entity_5[entity_7-1]='';
  entity_5[32] = 'y';
}