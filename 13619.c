void fun()
{
  int entity_9 = 83;
  char entity_6[entity_9] = "";
  char* entity_1;
  char* entity_2;
  memset(entity_6, 'X', entity_9-1);
  entity_6[entity_9-1]='0';
  entity_2 = (char*)malloc(68*sizeof(char));
  entity_2[0]='0';
  entity_1 = (char*)malloc(85*sizeof(char));
  entity_1[0]='0';
  entity_9 = 82;
  memcpy(entity_1, entity_6, entity_9*sizeof(char));
}