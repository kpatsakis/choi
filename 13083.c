void fun()
{
  int entity_8 = 13;
  entity_8 = 53;
  char* entity_9;
  char* entity_2;
  char entity_7[entity_8] = "";
  entity_2 = (char*)malloc(21*sizeof(char));
  entity_2[0]='0';
  memset(entity_7, 'o', entity_8-1);
  entity_7[entity_8-1]='0';
  entity_9 = (char*)malloc(95*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_7, entity_8*sizeof(char));
}