void fun()
{
  int entity_6 = 28;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char* entity_8;
  memset(entity_5, 'U', entity_6-1);
  entity_5[entity_6-1]='';
  entity_8 = (char*)malloc(74*sizeof(char));
  entity_8[74-1]='';
  memcpy(entity_8, entity_5, entity_6*sizeof(char));
}