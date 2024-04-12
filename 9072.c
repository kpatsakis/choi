void fun()
{
  int entity_1 = 55;
  entity_1 = 3;
  char* entity_6;
  char entity_8[33] = "";
  entity_8 = NULL;
  memset(entity_8, 'I', 33-1);
  entity_8[33-1]='';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  memcpy(entity_6, entity_8, 33*sizeof(char));
}