void fun()
{
  int entity_9 = 98;
  int entity_5 = 4;
  int entity_1 = 66;
  entity_9 = 37;
  char entity_4 = 'm';
  char* entity_8;
  char entity_6[96] = "";
  entity_6 = NULL;
  memset(entity_6, 'f', 96-1);
  entity_6[96-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  strcpy(entity_8, entity_6);
}