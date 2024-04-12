void fun()
{
  int entity_0 = 81;
  char entity_2[23] = "";
  entity_2 = NULL;
  char entity_8 = 'p';
  char* entity_9;
  memset(entity_2, 'f', 23-1);
  entity_2[23-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memcpy(entity_9, entity_2, 23*sizeof(char));
}