void fun()
{
  int entity_3 = 94;
  int entity_1 = 76;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char* entity_9;
  memset(entity_4, 'W', entity_1-1);
  entity_4[entity_1-1]='';
  entity_9 = (char*)malloc(19*sizeof(char));
  entity_9[19-1]='';
  memcpy(entity_9, entity_4, entity_1*sizeof(char));
}