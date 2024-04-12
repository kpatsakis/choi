void fun()
{
  int entity_0 = 95;
  char* entity_4;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char entity_1[9] = "";
  entity_1 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(11*sizeof(char));
  entity_5[11-1]='';
  memset(entity_6, 'p', entity_0-1);
  entity_6[entity_0-1]='';
  entity_4 = (char*)malloc(4*sizeof(char));
  entity_4[4-1]='';
  memset(entity_1, 'f', 9-1);
  entity_1[9-1]='';
  strcpy(entity_4, entity_6);
}