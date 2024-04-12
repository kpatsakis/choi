void fun()
{
  int entity_4 = 61;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  memset(entity_1, 'p', entity_4-1);
  entity_1[entity_4-1]='';
  entity_1[92] = 'z';
}