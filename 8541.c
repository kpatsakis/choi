void fun()
{
  int entity_5 = 95;
  int entity_3 = 89;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char* entity_4;
  memset(entity_8, 'N', entity_5-1);
  entity_8[entity_5-1]='';
  entity_4 = (char*)malloc(65*sizeof(char));
  entity_4[65-1]='';
  entity_5 = 27;
  memcpy(entity_4, entity_8, entity_5*sizeof(char));
}