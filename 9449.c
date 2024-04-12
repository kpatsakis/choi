void fun()
{
  int entity_8 = 60;
  int entity_6 = 12;
  entity_8 = 11;
  char* entity_0;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'u', entity_8-1);
  entity_7[entity_8-1]='';
  entity_0 = (char*)malloc(65*sizeof(char));
  entity_0[65-1]='';
  memcpy(entity_0, entity_7, entity_8*sizeof(char));
}