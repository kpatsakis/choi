void fun()
{
  int entity_4 = 89;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char* entity_2;
  char entity_5[58] = "";
  entity_5 = NULL;
  entity_2 = (char*)malloc(39*sizeof(char));
  entity_2[39-1]='';
  memset(entity_6, 'G', entity_4-1);
  entity_6[entity_4-1]='';
  memset(entity_5, 'f', 58-1);
  entity_5[58-1]='';
  memcpy(entity_2, entity_6, entity_4*sizeof(char));
}