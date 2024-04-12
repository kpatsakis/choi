void fun()
{
  int entity_9 = 93;
  char entity_8[65] = "";
  entity_8 = NULL;
  char* entity_0;
  memset(entity_8, 'E', 65-1);
  entity_8[65-1]='';
  entity_0 = (char*)malloc(60*sizeof(char));
  entity_0[60-1]='';
  strcpy(entity_0, entity_8);
}