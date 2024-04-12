void fun()
{
  int entity_0 = 42;
  int entity_6 = 27;
  char entity_7 = 'n';
  char* entity_9;
  char entity_1 = 'E';
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  entity_9 = (char*)malloc(19*sizeof(char));
  entity_9[19-1]='';
  memset(entity_8, 'o', entity_0-1);
  entity_8[entity_0-1]='';
  memcpy(entity_9, entity_8, entity_0*sizeof(char));
}