void fun()
{
  int entity_5 = 52;
  char* entity_0;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  memset(entity_6, 'I', entity_5-1);
  entity_6[entity_5-1]='';
  entity_0 = (char*)malloc(13*sizeof(char));
  entity_0[13-1]='';
  memcpy(entity_0, entity_6, entity_5*sizeof(char));
}