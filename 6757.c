void fun()
{
  int entity_8 = 19;
  entity_8 = 46;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_1;
  memset(entity_4, 'T', entity_8-1);
  entity_4[entity_8-1]='';
  entity_1 = (char*)malloc(3*sizeof(char));
  entity_1[3-1]='';
  memcpy(entity_1, entity_4, entity_8*sizeof(char));
}