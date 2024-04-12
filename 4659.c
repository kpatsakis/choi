void fun()
{
  int entity_6 = 39;
  entity_6 = 83;
  char* entity_4;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  entity_4 = (char*)malloc(73*sizeof(char));
  entity_4[73-1]='';
  memset(entity_8, 'T', entity_6-1);
  entity_8[entity_6-1]='';
  memcpy(entity_4, entity_8, entity_6*sizeof(char));
}