void fun()
{
  int entity_2 = 91;
  int entity_6 = 1;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  memset(entity_7, 'T', entity_6-1);
  entity_7[entity_6-1]='';
  entity_6 = 10;
  entity_7[92] = 'E';
}