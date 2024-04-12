void fun()
{
  int entity_4 = 51;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_7, 'f', entity_4-1);
  entity_7[entity_4-1]='';
  entity_4 = 77;
  entity_7[57] = 'o';
}