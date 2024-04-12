void fun()
{
  int entity_4 = 4;
  int entity_0 = 8;
  entity_0 = 77;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(39*sizeof(char));
  entity_3[39-1]='';
  memset(entity_2, 't', entity_0-1);
  entity_2[entity_0-1]='';
  memcpy(entity_3, entity_2, entity_0*sizeof(char));
}