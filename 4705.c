void fun()
{
  int entity_4 = 18;
  entity_4 = 18;
  char entity_1[51] = "";
  entity_1 = NULL;
  char* entity_6;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  char* entity_2;
  char entity_7 = 'A';
  memset(entity_0, 'I', entity_4-1);
  entity_0[entity_4-1]='';
  memset(entity_1, 'O', 51-1);
  entity_1[51-1]='';
  entity_2 = (char*)malloc(40*sizeof(char));
  entity_2[40-1]='';
  entity_6 = (char*)malloc(36*sizeof(char));
  entity_6[36-1]='';
  strcpy(entity_2, entity_0);
}