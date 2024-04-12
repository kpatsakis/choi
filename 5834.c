void fun()
{
  int entity_4 = 20;
  char entity_7[100] = "";
  entity_7 = NULL;
  char entity_6 = 'F';
  memset(entity_7, 'e', 100-1);
  entity_7[100-1]='';
  entity_7[entity_4] = 'W';
}