void fun()
{
  int entity_8 = 90;
  int entity_9 = 42;
  entity_8 = 92;
  char entity_1 = 'F';
  char entity_4[92] = "";
  entity_4 = NULL;
  char entity_7 = 'K';
  memset(entity_4, 'X', 92-1);
  entity_4[92-1]='';
  entity_4[entity_8] = 's';
}