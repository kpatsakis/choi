void fun()
{
  int entity_8 = 65;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(93*sizeof(char));
  entity_3[93-1]='';
  memset(entity_0, 'M', entity_8-1);
  entity_0[entity_8-1]='';
  memcpy(entity_3, entity_0, entity_8*sizeof(char));
}