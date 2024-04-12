void fun()
{
  int entity_5 = 57;
  char entity_6[0] = "";
  entity_6 = NULL;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'l', entity_5-1);
  entity_2[entity_5-1]='';
  memset(entity_6, 'S', 0-1);
  entity_6[0-1]='';
  entity_2[60] = 'K';
}