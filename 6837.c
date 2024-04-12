void fun()
{
  int entity_3 = 80;
  char entity_8 = 'n';
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char* entity_0;
  memset(entity_1, 'c', entity_3-1);
  entity_1[entity_3-1]='';
  entity_0 = (char*)malloc(24*sizeof(char));
  entity_0[24-1]='';
  memcpy(entity_0, entity_1, entity_3*sizeof(char));
}