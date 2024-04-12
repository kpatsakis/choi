void fun()
{
  int entity_9 = 60;
  int entity_7 = 69;
  char entity_3[8] = "";
  entity_3 = NULL;
  char* entity_6;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  memset(entity_3, 'V', 8-1);
  entity_3[8-1]='';
  memset(entity_4, 'a', entity_7-1);
  entity_4[entity_7-1]='';
  entity_6 = (char*)malloc(70*sizeof(char));
  entity_6[70-1]='';
  strcpy(entity_6, entity_4);
}