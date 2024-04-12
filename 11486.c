void fun()
{
  char* entity_6;
  char entity_9[91] = "";
  char* entity_1;
  memset(entity_9, 'X', 91-1);
  entity_9[91-1]='0';
  entity_6 = (char*)malloc(90*sizeof(char));
  entity_6[0]='0';
  entity_1 = (char*)malloc(12*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_6, entity_9);
}