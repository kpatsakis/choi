void fun()
{
  int entity_5 = 84;
  char entity_4 = 'K';
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char entity_1[40] = "";
  entity_1 = NULL;
  memset(entity_1, 'v', 40-1);
  entity_1[40-1]='';
  memset(entity_7, 'j', entity_5-1);
  entity_7[entity_5-1]='';
  entity_7[81] = 't';
}