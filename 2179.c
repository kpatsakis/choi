void fun()
{
  int entity_8 = 66;
  int entity_5 = 91;
  char entity_7[86] = "";
  entity_7 = NULL;
  memset(entity_7, 'a', 86-1);
  entity_7[86-1]='';
  entity_7[entity_5] = 'G';
}