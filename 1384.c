void fun()
{
  int entity_2 = 23;
  char entity_6[9] = "";
  entity_6 = NULL;
  memset(entity_6, 'f', 9-1);
  entity_6[9-1]='';
  entity_2 = 99;
  entity_6[entity_2] = 'c';
}