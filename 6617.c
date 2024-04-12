void fun()
{
  int entity_5 = 83;
  char* entity_1;
  char* entity_7;
  char entity_0[67] = "";
  entity_0 = NULL;
  char entity_4 = 'W';
  char entity_2[3] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(19*sizeof(char));
  entity_1[19-1]='';
  memset(entity_0, 'g', 67-1);
  entity_0[67-1]='';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  memset(entity_2, 'S', 3-1);
  entity_2[3-1]='';
  strcpy(entity_7, entity_2);
}