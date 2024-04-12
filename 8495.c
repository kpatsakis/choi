void fun()
{
  int entity_8 = 57;
  char entity_7 = 'u';
  char entity_3[100] = "";
  entity_3 = NULL;
  memset(entity_3, 'm', 100-1);
  entity_3[100-1]='';
  entity_3[entity_8] = 'c';
}