void fun()
{
  int entity_2 = 2;
  int entity_5 = 45;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  memset(entity_7, 'u', entity_2-1);
  entity_7[entity_2-1]='';
  entity_2 = 63;
  entity_7[48] = 'o';
}