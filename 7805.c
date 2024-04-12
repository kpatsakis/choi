void fun()
{
  int entity_6 = 28;
  int entity_0 = 6;
  char* entity_7;
  char entity_3[9] = "";
  entity_3 = NULL;
  char* entity_8;
  char entity_2[10] = "";
  entity_2 = NULL;
  memset(entity_3, 'X', 9-1);
  entity_3[9-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memset(entity_2, 'G', 10-1);
  entity_2[10-1]='';
  entity_8 = (char*)malloc(50*sizeof(char));
  entity_8[50-1]='';
  entity_6 = 88;
  strcpy(entity_7, entity_2);
}