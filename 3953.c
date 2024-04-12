void fun()
{
  int entity_8 = 33;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(81*sizeof(char));
  entity_3[81-1]='';
  memset(entity_5, 'J', entity_8-1);
  entity_5[entity_8-1]='';
  memcpy(entity_3, entity_5, entity_8*sizeof(char));
}