void fun()
{
  int entity_4 = 62;
  char entity_5[3] = "";
  entity_5 = NULL;
  char entity_7[26] = "";
  entity_7 = NULL;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char* entity_9;
  memset(entity_5, 't', 3-1);
  entity_5[3-1]='';
  entity_9 = (char*)malloc(94*sizeof(char));
  entity_9[94-1]='';
  memset(entity_2, 'q', entity_4-1);
  entity_2[entity_4-1]='';
  memset(entity_7, 's', 26-1);
  entity_7[26-1]='';
  memcpy(entity_9, entity_2, entity_4*sizeof(char));
}