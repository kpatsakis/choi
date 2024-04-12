void fun()
{
  int entity_2 = 84;
  entity_2 = 98;
  char entity_4[23] = "";
  entity_4 = NULL;
  memset(entity_4, 'o', 23-1);
  entity_4[23-1]='';
  entity_4[entity_2] = 'F';
}