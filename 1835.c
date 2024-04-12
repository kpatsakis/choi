void fun()
{
  int entity_2 = 72;
  entity_2 = 36;
  char entity_6[75] = "";
  entity_6 = NULL;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(60*sizeof(char));
  entity_8[60-1]='';
  memset(entity_1, 'V', entity_2-1);
  entity_1[entity_2-1]='';
  memset(entity_6, 'T', 75-1);
  entity_6[75-1]='';
  memcpy(entity_8, entity_1, entity_2*sizeof(char));
}