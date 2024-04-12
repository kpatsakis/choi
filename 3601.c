void fun()
{
  int entity_3 = 19;
  char* entity_0;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  memset(entity_1, 'm', entity_3-1);
  entity_1[entity_3-1]='';
  entity_0 = (char*)malloc(35*sizeof(char));
  entity_0[35-1]='';
  memcpy(entity_0, entity_1, entity_3*sizeof(char));
}