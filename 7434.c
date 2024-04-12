void fun()
{
  int entity_3 = 49;
  char entity_4[67] = "";
  entity_4 = NULL;
  char* entity_7;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_4, 'V', 67-1);
  entity_4[67-1]='';
  entity_7 = (char*)malloc(51*sizeof(char));
  entity_7[51-1]='';
  memset(entity_2, 'm', entity_3-1);
  entity_2[entity_3-1]='';
  strcpy(entity_7, entity_2);
}