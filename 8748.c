void fun()
{
  int entity_8 = 29;
  char entity_7[81] = "";
  entity_7 = NULL;
  memset(entity_7, 'x', 81-1);
  entity_7[81-1]='';
  entity_7[entity_8] = 'G';
}