void fun()
{
  int entity_9 = 43;
  char* entity_7;
  char* entity_6;
  char entity_1[entity_9] = "";
  entity_7 = (char*)malloc(34*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'h', entity_9-1);
  entity_1[entity_9-1]='0';
  entity_6 = (char*)malloc(16*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_7, entity_1, entity_9*sizeof(char));
}