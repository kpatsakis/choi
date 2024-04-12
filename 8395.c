void fun()
{
  int entity_6 = 56;
  char entity_7 = 'p';
  char* entity_0;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  memset(entity_1, 'z', entity_6-1);
  entity_1[entity_6-1]='';
  entity_0 = (char*)malloc(60*sizeof(char));
  entity_0[60-1]='';
  memcpy(entity_0, entity_1, entity_6*sizeof(char));
}