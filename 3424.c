void fun()
{
  int entity_8 = 63;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char* entity_5;
  memset(entity_7, 'Q', entity_8-1);
  entity_7[entity_8-1]='';
  entity_5 = (char*)malloc(6*sizeof(char));
  entity_5[6-1]='';
  entity_8 = 42;
  memcpy(entity_5, entity_7, entity_8*sizeof(char));
}