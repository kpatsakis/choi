void fun()
{
  int entity_8 = 94;
  entity_8 = 68;
  char entity_5[11] = "";
  entity_5 = NULL;
  char entity_2[77] = "";
  entity_2 = NULL;
  memset(entity_5, 'q', 11-1);
  entity_5[11-1]='';
  memset(entity_2, 'j', 77-1);
  entity_2[77-1]='';
  entity_5[entity_8] = 'k';
}