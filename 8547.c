void fun()
{
  int entity_1 = 44;
  entity_1 = 32;
  char* entity_7;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  memset(entity_5, 'H', entity_1-1);
  entity_5[entity_1-1]='';
  entity_7 = (char*)malloc(60*sizeof(char));
  entity_7[60-1]='';
  memcpy(entity_7, entity_5, entity_1*sizeof(char));
}