void fun()
{
  int entity_2 = 71;
  entity_2 = 18;
  char entity_1[42] = "";
  entity_1 = NULL;
  memset(entity_1, 'Y', 42-1);
  entity_1[42-1]='';
  entity_1[entity_2] = 'd';
}