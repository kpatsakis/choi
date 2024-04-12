void fun()
{
  int entity_8 = 66;
  int entity_4 = 23;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char entity_5 = 'K';
  char entity_7[39] = "";
  entity_7 = NULL;
  memset(entity_7, 'm', 39-1);
  entity_7[39-1]='';
  memset(entity_6, 'r', entity_4-1);
  entity_6[entity_4-1]='';
  entity_4 = 7;
  entity_6[78] = 'T';
}