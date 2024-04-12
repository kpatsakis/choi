void fun()
{
  int entity_6 = 30;
  char entity_8[19] = "";
  entity_8 = NULL;
  memset(entity_8, 'E', 19-1);
  entity_8[19-1]='';
  entity_6 = 74;
  entity_8[entity_6] = 's';
}