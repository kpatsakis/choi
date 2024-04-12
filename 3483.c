void fun()
{
  int entity_9 = 39;
  char entity_7[50] = "";
  entity_7 = NULL;
  char entity_1[92] = "";
  entity_1 = NULL;
  char entity_6 = 'X';
  memset(entity_1, 'x', 92-1);
  entity_1[92-1]='';
  memset(entity_7, 'g', 50-1);
  entity_7[50-1]='';
  entity_7[entity_9] = 'b';
}