void fun()
{
  int entity_1 = 63;
  char* entity_3;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(38*sizeof(char));
  entity_3[38-1]='';
  memset(entity_5, 'T', entity_1-1);
  entity_5[entity_1-1]='';
  memcpy(entity_3, entity_5, entity_1*sizeof(char));
}