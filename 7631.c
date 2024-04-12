void fun()
{
  int entity_4 = 89;
  char* entity_5;
  char entity_2[19] = "";
  entity_2 = NULL;
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memset(entity_2, 'm', 19-1);
  entity_2[19-1]='';
  entity_4 = 49;
  strcpy(entity_5, entity_2);
}