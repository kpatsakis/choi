void fun()
{
  int entity_2 = 74;
  entity_2 = 3;
  char entity_4[18] = "";
  entity_4 = NULL;
  char entity_9[23] = "";
  entity_9 = NULL;
  memset(entity_9, 'u', 23-1);
  entity_9[23-1]='';
  memset(entity_4, 'l', 18-1);
  entity_4[18-1]='';
  entity_4[entity_2] = 'k';
}