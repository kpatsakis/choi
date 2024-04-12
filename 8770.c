void fun()
{
  int entity_8 = 2;
  int entity_7 = 74;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char* entity_4;
  char entity_9[6] = "";
  entity_9 = NULL;
  memset(entity_9, 'O', 6-1);
  entity_9[6-1]='';
  entity_4 = (char*)malloc(6*sizeof(char));
  entity_4[6-1]='';
  memset(entity_2, 'M', entity_8-1);
  entity_2[entity_8-1]='';
  memcpy(entity_4, entity_2, entity_8*sizeof(char));
}