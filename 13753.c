void fun()
{
  int entity_0 = 2;
  char entity_3 = 'y';
  char* entity_9;
  char* entity_7;
  char* entity_5;
  char entity_6[entity_0] = "";
  entity_9 = (char*)malloc(12*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'F', entity_0-1);
  entity_6[entity_0-1]='0';
  entity_5 = (char*)malloc(5*sizeof(char));
  entity_5[0]='0';
  entity_7 = (char*)malloc(93*sizeof(char));
  entity_7[0]='0';
  entity_0 = 53;
  memcpy(entity_7, entity_6, entity_0*sizeof(char));
}