void fun()
{
  int entity_6 = 54;
  int entity_3 = 60;
  entity_3 = 85;
  char* entity_9;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_4;
  memset(entity_0, 'A', entity_3-1);
  entity_0[entity_3-1]='';
  entity_4 = (char*)malloc(58*sizeof(char));
  entity_4[58-1]='';
  entity_9 = (char*)malloc(39*sizeof(char));
  entity_9[39-1]='';
  memcpy(entity_4, entity_0, entity_3*sizeof(char));
}