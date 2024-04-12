void fun()
{
  int entity_3 = 28;
  char* entity_1;
  char* entity_7;
  char entity_5[entity_3] = "";
  char entity_9[12] = "";
  char entity_0 = 'f';
  memset(entity_9, 'Z', 12-1);
  entity_9[12-1]='0';
  entity_7 = (char*)malloc(94*sizeof(char));
  entity_7[0]='0';
  entity_1 = (char*)malloc(28*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'i', entity_3-1);
  entity_5[entity_3-1]='0';
  entity_3 = 68;
  strcpy(entity_7, entity_5);
}