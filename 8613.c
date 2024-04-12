void fun()
{
  int entity_1 = 58;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  memset(entity_8, 'X', entity_1-1);
  entity_8[entity_1-1]='';
  entity_8[4] = 'f';
}