void fun()
{
  int entity_2 = 94;
  entity_2 = 29;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  char entity_1[26] = "";
  entity_1 = NULL;
  memset(entity_1, 'M', 26-1);
  entity_1[26-1]='';
  memset(entity_8, 'z', entity_2-1);
  entity_8[entity_2-1]='';
  entity_8[40] = 'm';
}