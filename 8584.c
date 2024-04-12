void fun()
{
  int entity_2 = 87;
  int entity_0 = 85;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(29*sizeof(char));
  entity_1[29-1]='';
  memset(entity_5, 'U', entity_0-1);
  entity_5[entity_0-1]='';
  entity_0 = 70;
  memcpy(entity_1, entity_5, entity_0*sizeof(char));
}