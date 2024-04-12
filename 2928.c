void fun()
{
  int entity_4 = 21;
  char entity_7[100] = "";
  entity_7 = NULL;
  memset(entity_7, 'L', 100-1);
  entity_7[100-1]='';
  entity_7[entity_4] = 'Z';
}