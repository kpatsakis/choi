void fun()
{
  int entity_7 = 34;
  char* entity_4;
  char* entity_2;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char entity_0[71] = "";
  entity_0 = NULL;
  entity_2 = (char*)malloc(72*sizeof(char));
  entity_2[72-1]='';
  memset(entity_0, 'E', 71-1);
  entity_0[71-1]='';
  memset(entity_5, 'm', entity_7-1);
  entity_5[entity_7-1]='';
  entity_4 = (char*)malloc(83*sizeof(char));
  entity_4[83-1]='';
  strcpy(entity_4, entity_5);
}