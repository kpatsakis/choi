void fun()
{
  int entity_2 = 80;
  int entity_4 = 58;
  char entity_8[95] = "";
  entity_8 = NULL;
  memset(entity_8, 'B', 95-1);
  entity_8[95-1]='';
  entity_8[entity_4] = 'V';
}