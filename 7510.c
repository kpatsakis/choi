void fun()
{
  int entity_9 = 23;
  int entity_2 = 45;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  char entity_7 = 'S';
  memset(entity_1, 'Q', entity_2-1);
  entity_1[entity_2-1]='';
  entity_2 = 55;
  entity_1[7] = 'v';
}