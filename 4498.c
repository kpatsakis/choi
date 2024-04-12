void fun()
{
  int entity_3 = 60;
  entity_3 = 96;
  char* entity_1;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  entity_1 = (char*)malloc(88*sizeof(char));
  entity_1[88-1]='';
  memset(entity_0, 'U', entity_3-1);
  entity_0[entity_3-1]='';
  memcpy(entity_1, entity_0, entity_3*sizeof(char));
}