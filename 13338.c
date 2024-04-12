void fun()
{
  int entity_9 = 85;
  int entity_7 = 77;
  entity_9 = 85;
  char* entity_8;
  char entity_6[entity_9] = "";
  entity_8 = (char*)malloc(79*sizeof(char));
  entity_8[0]='0';
  memset(entity_6, 'd', entity_9-1);
  entity_6[entity_9-1]='0';
  strcpy(entity_8, entity_6);
}