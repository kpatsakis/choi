void fun()
{
  int entity_2 = 52;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  memset(entity_1, 'I', entity_2-1);
  entity_1[entity_2-1]='';
  entity_2 = 26;
  entity_1[5] = 'W';
}