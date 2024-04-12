void fun()
{
  int entity_3 = 89;
  int entity_2 = 18;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char entity_9 = 'C';
  memset(entity_5, 'T', entity_2-1);
  entity_5[entity_2-1]='';
  entity_2 = 81;
  entity_5[34] = 'G';
}