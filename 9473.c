void fun()
{
  int entity_4 = 20;
  char entity_9 = 'q';
  char entity_2 = 'Y';
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  memset(entity_1, 'Y', entity_4-1);
  entity_1[entity_4-1]='';
  entity_4 = 52;
  entity_1[40] = 'T';
}