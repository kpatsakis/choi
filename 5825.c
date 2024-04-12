void fun()
{
  int entity_5 = 8;
  entity_5 = 15;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char entity_2[0] = "";
  entity_2 = NULL;
  memset(entity_2, 'Z', 0-1);
  entity_2[0-1]='';
  memset(entity_3, 'I', entity_5-1);
  entity_3[entity_5-1]='';
  entity_3[15] = 'G';
}