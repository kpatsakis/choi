void fun()
{
  int entity_4 = 79;
  int entity_2 = 76;
  char entity_3[1] = "";
  entity_3 = NULL;
  memset(entity_3, 'B', 1-1);
  entity_3[1-1]='';
  entity_3[entity_2] = 'H';
}