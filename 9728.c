void fun()
{
  int entity_2 = 88;
  int entity_7 = 93;
  char entity_1[9] = "";
  entity_1 = NULL;
  memset(entity_1, 'l', 9-1);
  entity_1[9-1]='';
  entity_1[entity_7] = 'J';
}