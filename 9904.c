void fun()
{
  int entity_4 = 60;
  int entity_6 = 61;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  memset(entity_7, 'c', entity_6-1);
  entity_7[entity_6-1]='';
  entity_7[67] = 'p';
}