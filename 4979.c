void fun()
{
  int entity_2 = 14;
  char entity_4[60] = "";
  entity_4 = NULL;
  memset(entity_4, 'O', 60-1);
  entity_4[60-1]='';
  entity_4[entity_2] = 'D';
}