void fun()
{
  int entity_6 = 46;
  entity_6 = 92;
  char* entity_7;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  entity_7 = (char*)malloc(96*sizeof(char));
  entity_7[96-1]='';
  memset(entity_8, 'N', entity_6-1);
  entity_8[entity_6-1]='';
  memcpy(entity_7, entity_8, entity_6*sizeof(char));
}