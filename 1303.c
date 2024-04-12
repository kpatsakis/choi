void fun()
{
  int entity_9 = 97;
  char entity_3[27] = "";
  entity_3 = NULL;
  memset(entity_3, 'a', 27-1);
  entity_3[27-1]='';
  entity_3[entity_9] = 'b';
}