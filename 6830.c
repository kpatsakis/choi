void fun()
{
  int entity_4 = 21;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_7, 'N', entity_4-1);
  entity_7[entity_4-1]='';
  entity_7[92] = 'W';
}