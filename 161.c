void fun()
{
  int entity_8 = 77;
  char* entity_7;
  char entity_6[96] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memset(entity_6, 'w', 96-1);
  entity_6[96-1]='';
  entity_8 = 46;
  memcpy(entity_7, entity_6, 96*sizeof(char));
}