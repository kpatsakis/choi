void fun()
{
  int entity_9 = 3;
  char entity_2[27] = "";
  entity_2 = NULL;
  memset(entity_2, 'N', 27-1);
  entity_2[27-1]='';
  entity_2[entity_9] = 'b';
}