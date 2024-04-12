void fun()
{
  int entity_1 = 60;
  entity_1 = 41;
  char* entity_9;
  char* entity_4;
  char entity_6[entity_1] = "";
  memset(entity_6, 'E', entity_1-1);
  entity_6[entity_1-1]='0';
  entity_9 = (char*)malloc(21*sizeof(char));
  entity_9[0]='0';
  entity_4 = (char*)malloc(79*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_6, entity_1*sizeof(char));
}