void fun()
{
  int entity_8 = 67;
  entity_8 = 87;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char* entity_5;
  memset(entity_1, 'Z', entity_8-1);
  entity_1[entity_8-1]='';
  entity_5 = (char*)malloc(16*sizeof(char));
  entity_5[16-1]='';
  memcpy(entity_5, entity_1, entity_8*sizeof(char));
}