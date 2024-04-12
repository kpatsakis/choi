void fun()
{
  int entity_0 = 89;
  char* entity_4;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  memset(entity_6, 'p', entity_0-1);
  entity_6[entity_0-1]='';
  entity_4 = (char*)malloc(25*sizeof(char));
  entity_4[25-1]='';
  memcpy(entity_4, entity_6, entity_0*sizeof(char));
}