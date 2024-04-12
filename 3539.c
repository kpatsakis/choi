void fun()
{
  int entity_3 = 27;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  char* entity_7;
  memset(entity_5, 'J', entity_3-1);
  entity_5[entity_3-1]='';
  entity_7 = (char*)malloc(64*sizeof(char));
  entity_7[64-1]='';
  entity_3 = 30;
  memcpy(entity_7, entity_5, entity_3*sizeof(char));
}