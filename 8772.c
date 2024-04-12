void fun()
{
  int entity_4 = 79;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_7, 'W', entity_4-1);
  entity_7[entity_4-1]='';
  entity_7[94] = 'C';
}