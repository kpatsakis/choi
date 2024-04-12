void fun()
{
  int entity_8 = 33;
  char* entity_1;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(83*sizeof(char));
  entity_9[83-1]='';
  memset(entity_3, 'J', entity_8-1);
  entity_3[entity_8-1]='';
  entity_1 = (char*)malloc(38*sizeof(char));
  entity_1[38-1]='';
  memcpy(entity_9, entity_3, entity_8*sizeof(char));
}