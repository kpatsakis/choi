void fun()
{
  int entity_4 = 66;
  int entity_0 = 40;
  char* entity_7;
  char entity_9[59] = "";
  entity_9 = NULL;
  char entity_8 = 'n';
  memset(entity_9, 'B', 59-1);
  entity_9[59-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  strcpy(entity_7, entity_9);
}