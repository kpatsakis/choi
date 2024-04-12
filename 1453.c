void fun()
{
  int entity_3 = 57;
  int entity_4 = 52;
  char entity_2[51] = "";
  entity_2 = NULL;
  char* entity_0;
  char* entity_1;
  char entity_5[12] = "";
  entity_5 = NULL;
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[43-1]='';
  memset(entity_5, 'z', 12-1);
  entity_5[12-1]='';
  memset(entity_2, 'p', 51-1);
  entity_2[51-1]='';
  strcpy(entity_0, entity_5);
}