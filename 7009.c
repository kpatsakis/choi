void fun()
{
  int entity_0 = 79;
  int entity_9 = 38;
  int entity_1 = 8;
  char entity_7[11] = "";
  entity_7 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_7, 'E', 11-1);
  entity_7[11-1]='';
  strcpy(entity_8, entity_7);
}