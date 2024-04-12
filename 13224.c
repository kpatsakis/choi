void fun()
{
  int entity_9 = 29;
  entity_9 = 24;
  char entity_0[10] = "";
  char entity_2 = 'j';
  char* entity_5;
  memset(entity_0, 'N', 10-1);
  entity_0[10-1]='0';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_0);
}