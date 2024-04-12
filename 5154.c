void fun()
{
  int entity_2 = 100;
  char entity_4[19] = "";
  entity_4 = NULL;
  memset(entity_4, 'g', 19-1);
  entity_4[19-1]='';
  entity_2 = 94;
  entity_4[entity_2] = 'O';
}