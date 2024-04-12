void fun()
{
  int entity_3 = 87;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char* entity_4;
  memset(entity_1, 'k', entity_3-1);
  entity_1[entity_3-1]='';
  entity_4 = (char*)malloc(4*sizeof(char));
  entity_4[4-1]='';
  entity_3 = 9;
  memcpy(entity_4, entity_1, entity_3*sizeof(char));
}