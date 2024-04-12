void fun()
{
  int entity_1 = 46;
  entity_1 = 90;
  char* entity_6;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  memset(entity_5, 'K', entity_1-1);
  entity_5[entity_1-1]='';
  entity_6 = (char*)malloc(13*sizeof(char));
  entity_6[13-1]='';
  memcpy(entity_6, entity_5, entity_1*sizeof(char));
}