void fun()
{
  int entity_7 = 57;
  int entity_6 = 87;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(24*sizeof(char));
  entity_1[24-1]='';
  memset(entity_0, 'I', entity_6-1);
  entity_0[entity_6-1]='';
  memcpy(entity_1, entity_0, entity_6*sizeof(char));
}