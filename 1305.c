void fun()
{
  int entity_6 = 84;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  memset(entity_7, 'B', entity_6-1);
  entity_7[entity_6-1]='';
  entity_6 = 9;
  entity_7[16] = 'c';
}