void fun()
{
  int entity_5 = 87;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char entity_7[40] = "";
  entity_7 = NULL;
  memset(entity_7, 'Z', 40-1);
  entity_7[40-1]='';
  memset(entity_2, 'N', entity_5-1);
  entity_2[entity_5-1]='';
  entity_2[17] = 'Z';
}