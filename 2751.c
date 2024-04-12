void fun()
{
  int entity_7 = 18;
  char* entity_3;
  char entity_5[10] = "";
  entity_5 = NULL;
  char entity_2[54] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  memset(entity_5, 'u', 10-1);
  entity_5[10-1]='';
  memset(entity_2, 'G', 54-1);
  entity_2[54-1]='';
  strcpy(entity_3, entity_2);
}