void fun()
{
  int entity_5 = 42;
  char entity_6[3] = "";
  entity_6 = NULL;
  memset(entity_6, 'g', 3-1);
  entity_6[3-1]='';
  entity_6[entity_5] = 's';
}