void fun()
{
  int entity_4 = 88;
  char entity_7[83] = "";
  char* entity_9;
  char* entity_1;
  char entity_2[91] = "";
  memset(entity_7, 's', 83-1);
  entity_7[83-1]='0';
  entity_9 = (char*)malloc(53*sizeof(char));
  entity_9[0]='0';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'O', 91-1);
  entity_2[91-1]='0';
  entity_4 = 65;
  strcpy(entity_1, entity_2);
}