void fun()
{
  int entity_1 = 59;
  int entity_2 = 79;
  entity_1 = 64;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  memset(entity_4, 'T', entity_1-1);
  entity_4[entity_1-1]='';
  entity_4[54] = 'l';
}