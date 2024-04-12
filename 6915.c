void fun()
{
  int entity_5 = 97;
  char entity_6[36] = "";
  entity_6 = NULL;
  memset(entity_6, 'P', 36-1);
  entity_6[36-1]='';
  entity_6[entity_5] = 'o';
}