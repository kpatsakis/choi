void fun()
{
  int entity_6 = 87;
  char* entity_0;
  char entity_8 = 'i';
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  memset(entity_3, 'S', entity_6-1);
  entity_3[entity_6-1]='';
  entity_0 = (char*)malloc(39*sizeof(char));
  entity_0[39-1]='';
  memcpy(entity_0, entity_3, entity_6*sizeof(char));
}