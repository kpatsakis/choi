void fun()
{
  int entity_0 = 78;
  int entity_2 = 83;
  entity_0 = 43;
  char entity_6[45] = "";
  entity_6 = NULL;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char entity_7[15] = "";
  entity_7 = NULL;
  memset(entity_6, 'J', 45-1);
  entity_6[45-1]='';
  memset(entity_7, 'i', 15-1);
  entity_7[15-1]='';
  memset(entity_5, 'M', entity_0-1);
  entity_5[entity_0-1]='';
  entity_5[57] = 'k';
}