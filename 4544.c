void fun()
{
  int entity_7 = 34;
  char* entity_1;
  char* entity_2;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char entity_0[65] = "";
  entity_0 = NULL;
  memset(entity_5, 'v', entity_7-1);
  entity_5[entity_7-1]='';
  memset(entity_0, 'O', 65-1);
  entity_0[65-1]='';
  entity_2 = (char*)malloc(22*sizeof(char));
  entity_2[22-1]='';
  entity_1 = (char*)malloc(41*sizeof(char));
  entity_1[41-1]='';
  strcpy(entity_1, entity_5);
}