void fun()
{
  int entity_8 = 63;
  char* entity_5;
  char entity_9[entity_8] = "";
  char entity_2 = 'V';
  char* entity_7;
  entity_7 = (char*)malloc(10*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'i', entity_8-1);
  entity_9[entity_8-1]='0';
  entity_5 = (char*)malloc(36*sizeof(char));
  entity_5[0]='0';
  entity_8 = 22;
  memcpy(entity_5, entity_9, entity_8*sizeof(char));
}