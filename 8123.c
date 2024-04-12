void fun()
{
  int entity_5 = 38;
  char entity_2[1] = "";
  entity_2 = NULL;
  char entity_8[68] = "";
  entity_8 = NULL;
  memset(entity_8, 'F', 68-1);
  entity_8[68-1]='';
  memset(entity_2, 't', 1-1);
  entity_2[1-1]='';
  entity_2[entity_5] = 'Q';
}