void fun()
{
  int entity_6 = 27;
  entity_6 = 78;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(19*sizeof(char));
  entity_7[19-1]='';
  memset(entity_4, 'K', entity_6-1);
  entity_4[entity_6-1]='';
  memcpy(entity_7, entity_4, entity_6*sizeof(char));
}