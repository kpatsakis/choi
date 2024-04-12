void fun()
{
  int entity_9 = 20;
  entity_9 = 87;
  char entity_5[30] = "";
  char entity_7 = 'j';
  char* entity_6;
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'b', 30-1);
  entity_5[30-1]='0';
  strcpy(entity_6, entity_5);
}