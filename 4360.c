void fun()
{
  int entity_3 = 90;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  char entity_7 = 'u';
  memset(entity_2, 'O', entity_3-1);
  entity_2[entity_3-1]='';
  entity_2[28] = 'C';
}