void fun()
{
  int entity_7 = 95;
  char entity_4[44] = "";
  entity_4 = NULL;
  char entity_6[51] = "";
  entity_6 = NULL;
  char* entity_1;
  char* entity_2;
  memset(entity_4, 'D', 44-1);
  entity_4[44-1]='';
  entity_1 = (char*)malloc(66*sizeof(char));
  entity_1[66-1]='';
  memset(entity_6, 'F', 51-1);
  entity_6[51-1]='';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[entity_7-1]='';
  entity_7 = 81;
  strcpy(entity_2, entity_4);
}