void fun()
{
  int entity_6 = 87;
  char* entity_5;
  char entity_9[3] = "";
  char* entity_3;
  memset(entity_9, 'K', 3-1);
  entity_9[3-1]='0';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[0]='0';
  entity_3 = (char*)malloc(28*sizeof(char));
  entity_3[0]='0';
  entity_6 = 36;
  strcpy(entity_5, entity_9);
}