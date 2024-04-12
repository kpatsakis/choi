void fun()
{
  int entity_3 = 92;
  entity_3 = 53;
  char* entity_1;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  entity_1 = (char*)malloc(31*sizeof(char));
  entity_1[31-1]='';
  memset(entity_0, 'f', entity_3-1);
  entity_0[entity_3-1]='';
  memcpy(entity_1, entity_0, entity_3*sizeof(char));
}