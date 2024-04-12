void fun()
{
  int entity_8 = 87;
  char* entity_6;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  memset(entity_1, 'D', entity_8-1);
  entity_1[entity_8-1]='';
  entity_6 = (char*)malloc(8*sizeof(char));
  entity_6[8-1]='';
  memcpy(entity_6, entity_1, entity_8*sizeof(char));
}