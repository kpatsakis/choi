void fun()
{
  int entity_4 = 86;
  char entity_2[19] = "";
  entity_2 = NULL;
  char* entity_6;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_7, 'B', entity_4-1);
  entity_7[entity_4-1]='';
  entity_6 = (char*)malloc(18*sizeof(char));
  entity_6[18-1]='';
  memset(entity_2, 'N', 19-1);
  entity_2[19-1]='';
  memcpy(entity_6, entity_7, entity_4*sizeof(char));
}