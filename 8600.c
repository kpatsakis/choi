void fun()
{
  int entity_0 = 81;
  char entity_8[70] = "";
  entity_8 = NULL;
  char entity_2 = 'n';
  char* entity_3;
  char entity_1 = 'V';
  char* entity_9;
  memset(entity_8, 'T', 70-1);
  entity_8[70-1]='';
  entity_3 = (char*)malloc(86*sizeof(char));
  entity_3[86-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  strcpy(entity_9, entity_8);
}