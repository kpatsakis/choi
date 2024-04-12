void fun()
{
  int entity_6 = 32;
  entity_6 = 33;
  char entity_4[41] = "";
  entity_4 = NULL;
  memset(entity_4, 'E', 41-1);
  entity_4[41-1]='';
  entity_4[entity_6] = 'l';
}