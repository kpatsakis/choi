void fun()
{
  int entity_2 = 20;
  char entity_7[76] = "";
  entity_7 = NULL;
  char* entity_0;
  char* entity_5;
  char entity_1[29] = "";
  entity_1 = NULL;
  memset(entity_1, 'm', 29-1);
  entity_1[29-1]='';
  entity_5 = (char*)malloc(97*sizeof(char));
  entity_5[97-1]='';
  memset(entity_7, 'T', 76-1);
  entity_7[76-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  strcpy(entity_0, entity_1);
}