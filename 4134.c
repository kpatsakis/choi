void fun()
{
  int entity_5 = 54;
  char entity_8[61] = "";
  entity_8 = NULL;
  memset(entity_8, 'U', 61-1);
  entity_8[61-1]='';
  entity_8[entity_5] = 'X';
}