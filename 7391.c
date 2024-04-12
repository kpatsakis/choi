void fun()
{
  int entity_0 = 70;
  char entity_3[100] = "";
  entity_3 = NULL;
  memset(entity_3, 'Z', 100-1);
  entity_3[100-1]='';
  entity_3[entity_0] = 'g';
}