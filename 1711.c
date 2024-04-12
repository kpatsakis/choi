void fun()
{
  int entity_0 = 57;
  char* entity_4;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  memset(entity_1, 'G', entity_0-1);
  entity_1[entity_0-1]='';
  entity_4 = (char*)malloc(36*sizeof(char));
  entity_4[36-1]='';
  entity_0 = 13;
  memcpy(entity_4, entity_1, entity_0*sizeof(char));
}