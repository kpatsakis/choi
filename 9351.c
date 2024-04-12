void fun()
{
  int entity_8 = 90;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  memset(entity_4, 'E', entity_8-1);
  entity_4[entity_8-1]='';
  entity_4[7] = 'W';
}