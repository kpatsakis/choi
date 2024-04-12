void fun()
{
  int entity_6 = 9;
  char entity_2 = 'm';
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  memset(entity_8, 'E', entity_6-1);
  entity_8[entity_6-1]='';
  entity_8[95] = 'D';
}