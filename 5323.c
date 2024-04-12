void fun()
{
  int entity_8 = 71;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char entity_7 = 'L';
  char* entity_6;
  entity_6 = (char*)malloc(70*sizeof(char));
  entity_6[70-1]='';
  memset(entity_5, 'l', entity_8-1);
  entity_5[entity_8-1]='';
  entity_8 = 7;
  memcpy(entity_6, entity_5, entity_8*sizeof(char));
}