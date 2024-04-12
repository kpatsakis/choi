void fun()
{
  int entity_0 = 34;
  entity_0 = 72;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char* entity_8;
  memset(entity_2, 'y', entity_0-1);
  entity_2[entity_0-1]='';
  entity_8 = (char*)malloc(81*sizeof(char));
  entity_8[81-1]='';
  memcpy(entity_8, entity_2, entity_0*sizeof(char));
}