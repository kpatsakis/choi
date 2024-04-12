void fun()
{
  int entity_9 = 13;
  int entity_0 = 48;
  entity_9 = 13;
  char* entity_8;
  char entity_6[entity_9] = "";
  entity_8 = (char*)malloc(20*sizeof(char));
  entity_8[0]='0';
  memset(entity_6, 'm', entity_9-1);
  entity_6[entity_9-1]='0';
  strcpy(entity_8, entity_6);
}