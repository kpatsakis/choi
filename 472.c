void fun()
{
  int entity_7 = 39;
  entity_7 = 44;
  char entity_5[92] = "";
  entity_5 = NULL;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char* entity_4;
  char entity_2 = 't';
  memset(entity_5, 'P', 92-1);
  entity_5[92-1]='';
  memset(entity_6, 'U', entity_7-1);
  entity_6[entity_7-1]='';
  entity_4 = (char*)malloc(94*sizeof(char));
  entity_4[94-1]='';
  memcpy(entity_4, entity_6, entity_7*sizeof(char));
}