void fun()
{
  int entity_6 = 52;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(35*sizeof(char));
  entity_8[35-1]='';
  memset(entity_4, 'V', entity_6-1);
  entity_4[entity_6-1]='';
  entity_6 = 92;
  memcpy(entity_8, entity_4, entity_6*sizeof(char));
}