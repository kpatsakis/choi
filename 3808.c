void fun()
{
  int entity_7 = 5;
  int entity_1 = 38;
  int entity_8 = 46;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  memset(entity_2, 'S', entity_1-1);
  entity_2[entity_1-1]='';
  entity_2[79] = 'G';
}