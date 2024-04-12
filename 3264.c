void fun()
{
  int entity_6 = 33;
  char* entity_3;
  char entity_9[81] = "";
  entity_9 = NULL;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  memset(entity_2, 'i', entity_6-1);
  entity_2[entity_6-1]='';
  entity_3 = (char*)malloc(97*sizeof(char));
  entity_3[97-1]='';
  memset(entity_9, 'F', 81-1);
  entity_9[81-1]='';
  entity_6 = 17;
  memcpy(entity_3, entity_2, entity_6*sizeof(char));
}