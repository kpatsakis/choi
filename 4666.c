void fun()
{
  int entity_3 = 28;
  entity_3 = 52;
  char entity_9[26] = "";
  entity_9 = NULL;
  char entity_2[48] = "";
  entity_2 = NULL;
  memset(entity_9, 'Q', 26-1);
  entity_9[26-1]='';
  memset(entity_2, 'C', 48-1);
  entity_2[48-1]='';
  entity_9[entity_3] = 'd';
}