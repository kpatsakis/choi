void fun()
{
  int entity_1 = 28;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char entity_4[40] = "";
  entity_4 = NULL;
  char entity_3 = 'K';
  memset(entity_4, 'X', 40-1);
  entity_4[40-1]='';
  memset(entity_5, 'I', entity_1-1);
  entity_5[entity_1-1]='';
  entity_5[43] = 'F';
}