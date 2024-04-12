void fun()
{
  int entity_6 = 63;
  entity_6 = 71;
  char* entity_9;
  char* entity_4;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  memset(entity_2, 'k', entity_6-1);
  entity_2[entity_6-1]='';
  entity_4 = (char*)malloc(54*sizeof(char));
  entity_4[54-1]='';
  entity_9 = (char*)malloc(74*sizeof(char));
  entity_9[74-1]='';
  memcpy(entity_4, entity_2, entity_6*sizeof(char));
}