void fun()
{
  int entity_1 = 4;
  char* entity_3;
  char entity_4[72] = "";
  entity_4 = NULL;
  char entity_2[19] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memset(entity_4, 'Q', 72-1);
  entity_4[72-1]='';
  memset(entity_2, 'M', 19-1);
  entity_2[19-1]='';
  strcpy(entity_3, entity_2);
}