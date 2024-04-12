void fun()
{
  int entity_6 = 85;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_8;
  memset(entity_4, 'D', entity_6-1);
  entity_4[entity_6-1]='';
  entity_8 = (char*)malloc(6*sizeof(char));
  entity_8[6-1]='';
  entity_6 = 89;
  memcpy(entity_8, entity_4, entity_6*sizeof(char));
}