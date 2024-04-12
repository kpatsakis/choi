void fun()
{
  int entity_7 = 7;
  char* entity_3;
  char entity_4 = 'm';
  char entity_1[65] = "";
  entity_1 = NULL;
  char entity_2[12] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(56*sizeof(char));
  entity_3[56-1]='';
  memset(entity_1, 'I', 65-1);
  entity_1[65-1]='';
  memset(entity_2, 'd', 12-1);
  entity_2[12-1]='';
  strcpy(entity_3, entity_2);
}