void fun()
{
  int entity_8 = 75;
  char* entity_9;
  char entity_6[75] = "";
  entity_6 = NULL;
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memset(entity_6, 'V', 75-1);
  entity_6[75-1]='';
  entity_8 = 82;
  memcpy(entity_9, entity_6, 75*sizeof(char));
}