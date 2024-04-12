void fun()
{
  int entity_4 = 54;
  char entity_1[55] = "";
  entity_1 = NULL;
  memset(entity_1, 'e', 55-1);
  entity_1[55-1]='';
  entity_4 = 11;
  entity_1[entity_4] = 'h';
}