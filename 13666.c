void fun()
{
  int entity_9 = 63;
  char entity_5 = 'O';
  char* entity_1;
  char* entity_7;
  char entity_6[20] = "";
  char entity_0[entity_9] = "";
  memset(entity_6, 'Z', 20-1);
  entity_6[20-1]='0';
  entity_7 = (char*)malloc(47*sizeof(char));
  entity_7[0]='0';
  entity_1 = (char*)malloc(97*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'P', entity_9-1);
  entity_0[entity_9-1]='0';
  entity_9 = 67;
  memcpy(entity_7, entity_0, entity_9*sizeof(char));
}