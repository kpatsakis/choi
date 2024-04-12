void fun()
{
  int entity_3 = 56;
  entity_3 = 44;
  char entity_2[56] = "";
  entity_2 = NULL;
  memset(entity_2, 'F', 56-1);
  entity_2[56-1]='';
  entity_2[entity_3] = 'E';
}