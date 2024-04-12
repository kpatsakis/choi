void fun()
{
  int entity_8 = 85;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  memset(entity_2, 'E', entity_8-1);
  entity_2[entity_8-1]='';
  entity_2[7] = 'O';
}