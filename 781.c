void fun()
{
  int entity_0 = 6;
  char* entity_9;
  char entity_8[79] = "";
  entity_8 = NULL;
  memset(entity_8, 'Z', 79-1);
  entity_8[79-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memcpy(entity_9, entity_8, 79*sizeof(char));
}