void fun()
{
  int entity_4 = 35;
  int entity_5 = 91;
  int entity_7 = 14;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  memset(entity_6, 's', entity_5-1);
  entity_6[entity_5-1]='';
  entity_5 = 36;
  entity_6[12] = 'K';
}