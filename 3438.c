void fun()
{
  int entity_5 = 59;
  char entity_8[39] = "";
  entity_8 = NULL;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  memset(entity_8, 'i', 39-1);
  entity_8[39-1]='';
  memset(entity_6, 'W', entity_5-1);
  entity_6[entity_5-1]='';
  entity_5 = 100;
  entity_6[25] = 'j';
}