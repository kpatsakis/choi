void fun()
{
  int entity_7 = 24;
  int entity_9 = 29;
  entity_9 = 22;
  char* entity_8;
  char entity_2[entity_9] = "";
  char* entity_1;
  entity_8 = (char*)malloc(64*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'c', entity_9-1);
  entity_2[entity_9-1]='0';
  entity_1 = (char*)malloc(51*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_8, entity_2, entity_9*sizeof(char));
}