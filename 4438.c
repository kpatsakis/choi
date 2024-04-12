void fun()
{
  int entity_4 = 18;
  int entity_2 = 7;
  entity_4 = 73;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  char entity_6[34] = "";
  entity_6 = NULL;
  memset(entity_6, 'q', 34-1);
  entity_6[34-1]='';
  memset(entity_7, 'U', entity_4-1);
  entity_7[entity_4-1]='';
  entity_7[8] = 'h';
}