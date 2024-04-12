void fun()
{
  int entity_8 = 89;
  char entity_4[7] = "";
  entity_4 = NULL;
  char entity_2[54] = "";
  entity_2 = NULL;
  char* entity_6;
  memset(entity_4, 'O', 7-1);
  entity_4[7-1]='';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memset(entity_2, 'F', 54-1);
  entity_2[54-1]='';
  memcpy(entity_6, entity_4, 7*sizeof(char));
}