void fun()
{
  int entity_9 = 53;
  int entity_5 = 35;
  entity_9 = 68;
  char* entity_1;
  char* entity_0;
  char entity_2[entity_9] = "";
  char* entity_3;
  memset(entity_2, 't', entity_9-1);
  entity_2[entity_9-1]='0';
  entity_1 = (char*)malloc(11*sizeof(char));
  entity_1[0]='0';
  entity_0 = (char*)malloc(76*sizeof(char));
  entity_0[0]='0';
  entity_3 = (char*)malloc(52*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_1, entity_2, entity_9*sizeof(char));
}