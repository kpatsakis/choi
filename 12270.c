void fun()
{
  int entity_1 = 53;
  char* entity_9;
  char entity_2[entity_1] = "";
  memset(entity_2, 'z', entity_1-1);
  entity_2[entity_1-1]='0';
  entity_9 = (char*)malloc(89*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_2, entity_1*sizeof(char));
}