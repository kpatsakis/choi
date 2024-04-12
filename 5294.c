void fun()
{
  int entity_8 = 90;
  char* entity_3;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(39*sizeof(char));
  entity_3[39-1]='';
  memset(entity_7, 'J', entity_8-1);
  entity_7[entity_8-1]='';
  memcpy(entity_3, entity_7, entity_8*sizeof(char));
}