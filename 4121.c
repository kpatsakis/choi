void fun()
{
  int entity_7 = 20;
  char* entity_3;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char entity_9[8] = "";
  entity_9 = NULL;
  memset(entity_8, 'M', entity_7-1);
  entity_8[entity_7-1]='';
  memset(entity_9, 'I', 8-1);
  entity_9[8-1]='';
  entity_3 = (char*)malloc(5*sizeof(char));
  entity_3[5-1]='';
  strcpy(entity_3, entity_8);
}