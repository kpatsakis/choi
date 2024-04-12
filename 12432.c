void fun()
{
  int entity_3 = 64;
  char* entity_8;
  char entity_9[entity_3] = "";
  char* entity_7;
  entity_8 = (char*)malloc(30*sizeof(char));
  entity_8[0]='0';
  entity_7 = (char*)malloc(96*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'd', entity_3-1);
  entity_9[entity_3-1]='0';
  strcpy(entity_7, entity_9);
}