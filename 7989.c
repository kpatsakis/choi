void fun()
{
  int entity_5 = 19;
  char entity_7 = 'w';
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  memset(entity_1, 'c', entity_5-1);
  entity_1[entity_5-1]='';
  entity_1[92] = 'C';
}