void fun()
{
  int entity_9 = 90;
  entity_9 = 93;
  char entity_6[entity_9] = "";
  char* entity_8;
  memset(entity_6, 'y', entity_9-1);
  entity_6[entity_9-1]='0';
  entity_8 = (char*)malloc(13*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_6, entity_9*sizeof(char));
}