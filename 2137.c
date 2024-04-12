void fun()
{
  int entity_1 = 13;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(39*sizeof(char));
  entity_3[39-1]='';
  memset(entity_6, 'm', entity_1-1);
  entity_6[entity_1-1]='';
  memcpy(entity_3, entity_6, entity_1*sizeof(char));
}