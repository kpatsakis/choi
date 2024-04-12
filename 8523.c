void fun()
{
  int entity_2 = 81;
  int entity_7 = 50;
  char entity_4[11] = "";
  entity_4 = NULL;
  memset(entity_4, 'A', 11-1);
  entity_4[11-1]='';
  entity_2 = 3;
  entity_4[entity_2] = 'M';
}