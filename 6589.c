void fun()
{
  int entity_8 = 71;
  entity_8 = 8;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(81*sizeof(char));
  entity_2[81-1]='';
  memset(entity_4, 'V', entity_8-1);
  entity_4[entity_8-1]='';
  memcpy(entity_2, entity_4, entity_8*sizeof(char));
}