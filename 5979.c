void fun()
{
  int entity_4 = 74;
  int entity_2 = 83;
  char entity_5[25] = "";
  entity_5 = NULL;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  memset(entity_6, 'S', entity_2-1);
  entity_6[entity_2-1]='';
  memset(entity_5, 'L', 25-1);
  entity_5[25-1]='';
  entity_6[68] = 'Y';
}