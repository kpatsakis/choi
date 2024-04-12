void fun()
{
  int entity_8 = 54;
  char* entity_2;
  char entity_1[46] = "";
  entity_1 = NULL;
  char entity_6 = 'm';
  char* entity_3;
  memset(entity_1, 'Y', 46-1);
  entity_1[46-1]='';
  entity_2 = (char*)malloc(49*sizeof(char));
  entity_2[49-1]='';
  entity_3 = (char*)malloc(9*sizeof(char));
  entity_3[9-1]='';
  strcpy(entity_3, entity_1);
}