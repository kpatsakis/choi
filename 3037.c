void fun()
{
  int entity_1 = 36;
  char* entity_8;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  memset(entity_7, 'P', entity_1-1);
  entity_7[entity_1-1]='';
  entity_8 = (char*)malloc(37*sizeof(char));
  entity_8[37-1]='';
  entity_1 = 87;
  memcpy(entity_8, entity_7, entity_1*sizeof(char));
}