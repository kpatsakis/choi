void fun()
{
  int entity_1 = 29;
  char entity_8[61] = "";
  entity_8 = NULL;
  memset(entity_8, 'A', 61-1);
  entity_8[61-1]='';
  entity_8[entity_1] = 'd';
}