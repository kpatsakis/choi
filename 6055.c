void fun()
{
  int entity_3 = 89;
  char entity_7 = 'J';
  char* entity_9;
  char entity_2[14] = "";
  entity_2 = NULL;
  char entity_4[83] = "";
  entity_4 = NULL;
  memset(entity_2, 'N', 14-1);
  entity_2[14-1]='';
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[entity_3-1]='';
  memset(entity_4, 'U', 83-1);
  entity_4[83-1]='';
  strcpy(entity_9, entity_2);
}