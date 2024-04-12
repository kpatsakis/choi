void fun()
{
  int entity_5 = 27;
  int entity_9 = 56;
  entity_5 = 40;
  char entity_7[87] = "";
  entity_7 = NULL;
  char entity_6[98] = "";
  entity_6 = NULL;
  memset(entity_7, 'H', 87-1);
  entity_7[87-1]='';
  memset(entity_6, 's', 98-1);
  entity_6[98-1]='';
  entity_6[entity_5] = 'M';
}