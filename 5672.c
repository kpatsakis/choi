void fun()
{
  int entity_8 = 87;
  char entity_4[0] = "";
  entity_4 = NULL;
  char entity_2[35] = "";
  entity_2 = NULL;
  char* entity_9;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char entity_6 = 'U';
  memset(entity_4, 'c', 0-1);
  entity_4[0-1]='';
  entity_9 = (char*)malloc(24*sizeof(char));
  entity_9[24-1]='';
  memset(entity_7, 'T', entity_8-1);
  entity_7[entity_8-1]='';
  memset(entity_2, 'O', 35-1);
  entity_2[35-1]='';
  memcpy(entity_9, entity_7, entity_8*sizeof(char));
}