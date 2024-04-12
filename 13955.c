void fun()
{
  int entity_6 = 99;
  int entity_7 = 12;
  char* entity_1;
  char entity_9[entity_7] = "";
  char* entity_4;
  char* entity_0;
  entity_1 = (char*)malloc(17*sizeof(char));
  entity_1[0]='0';
  entity_4 = (char*)malloc(72*sizeof(char));
  entity_4[0]='0';
  entity_0 = (char*)malloc(32*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'C', entity_7-1);
  entity_9[entity_7-1]='0';
  entity_7 = 57;
  memcpy(entity_1, entity_9, entity_7*sizeof(char));
}