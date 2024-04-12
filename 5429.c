void fun()
{
  int entity_7 = 78;
  char* entity_5;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  memset(entity_8, 'U', entity_7-1);
  entity_8[entity_7-1]='';
  entity_5 = (char*)malloc(74*sizeof(char));
  entity_5[74-1]='';
  memcpy(entity_5, entity_8, entity_7*sizeof(char));
}