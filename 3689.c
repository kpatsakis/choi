void fun()
{
  int entity_9 = 18;
  char entity_3[69] = "";
  entity_3 = NULL;
  char entity_6[50] = "";
  entity_6 = NULL;
  memset(entity_3, 'k', 69-1);
  entity_3[69-1]='';
  memset(entity_6, 'r', 50-1);
  entity_6[50-1]='';
  entity_3[entity_9] = 'v';
}