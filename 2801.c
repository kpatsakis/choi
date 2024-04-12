void fun()
{
  int entity_0 = 75;
  char* entity_8;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  char entity_2 = 'n';
  entity_8 = (char*)malloc(66*sizeof(char));
  entity_8[66-1]='';
  memset(entity_7, 'm', entity_0-1);
  entity_7[entity_0-1]='';
  memcpy(entity_8, entity_7, entity_0*sizeof(char));
}