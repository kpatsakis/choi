void fun()
{
  int entity_9 = 61;
  entity_9 = 61;
  char* entity_1;
  char* entity_8;
  char* entity_5;
  char entity_4[entity_9] = "";
  entity_1 = (char*)malloc(61*sizeof(char));
  entity_1[0]='0';
  entity_5 = (char*)malloc(17*sizeof(char));
  entity_5[0]='0';
  entity_8 = (char*)malloc(77*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'j', entity_9-1);
  entity_4[entity_9-1]='0';
  strcpy(entity_1, entity_4);
}