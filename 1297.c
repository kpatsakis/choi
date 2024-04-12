void fun()
{
  int entity_8 = 86;
  int entity_2 = 81;
  char entity_6[86] = "";
  entity_6 = NULL;
  memset(entity_6, 'j', 86-1);
  entity_6[86-1]='';
  entity_8 = 49;
  entity_6[entity_8] = 'J';
}