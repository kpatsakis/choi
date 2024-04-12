void fun()
{
  int entity_5 = 24;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  memset(entity_8, 'g', entity_5-1);
  entity_8[entity_5-1]='';
  entity_8[79] = 'W';
}