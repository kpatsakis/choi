void fun()
{
  int entity_8 = 56;
  entity_8 = 27;
  char entity_5[94] = "";
  entity_5 = NULL;
  char* entity_6;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  memset(entity_5, 'o', 94-1);
  entity_5[94-1]='';
  entity_6 = (char*)malloc(13*sizeof(char));
  entity_6[13-1]='';
  memset(entity_4, 'w', entity_8-1);
  entity_4[entity_8-1]='';
  memcpy(entity_6, entity_4, entity_8*sizeof(char));
}