void fun()
{
  int entity_8 = 50;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char entity_3[13] = "";
  entity_3 = NULL;
  memset(entity_3, 'y', 13-1);
  entity_3[13-1]='';
  memset(entity_4, 'v', entity_8-1);
  entity_4[entity_8-1]='';
  entity_4[95] = 'W';
}