void fun()
{
  int entity_5 = 60;
  int entity_2 = 90;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  memset(entity_8, 'm', entity_2-1);
  entity_8[entity_2-1]='';
  entity_8[15] = 'h';
}