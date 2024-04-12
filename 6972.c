void fun()
{
  int entity_2 = 74;
  entity_2 = 27;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char entity_9[3] = "";
  entity_9 = NULL;
  memset(entity_9, 'F', 3-1);
  entity_9[3-1]='';
  memset(entity_6, 'Q', entity_2-1);
  entity_6[entity_2-1]='';
  entity_6[35] = 'C';
}