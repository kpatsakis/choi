void fun()
{
  int entity_3 = 50;
  char entity_6[41] = "";
  entity_6 = NULL;
  memset(entity_6, 'p', 41-1);
  entity_6[41-1]='';
  entity_6[entity_3] = 'q';
}