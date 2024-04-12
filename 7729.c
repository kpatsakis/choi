void fun()
{
  int entity_3 = 25;
  int entity_7 = 77;
  char entity_9[90] = "";
  entity_9 = NULL;
  char entity_5 = 'B';
  memset(entity_9, 'V', 90-1);
  entity_9[90-1]='';
  entity_3 = 19;
  entity_9[entity_3] = 'D';
}