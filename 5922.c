void fun()
{
  int entity_3 = 8;
  int entity_4 = 7;
  entity_4 = 71;
  char entity_8[51] = "";
  entity_8 = NULL;
  char entity_7[21] = "";
  entity_7 = NULL;
  char* entity_2;
  char* entity_6;
  entity_6 = (char*)malloc(94*sizeof(char));
  entity_6[94-1]='';
  memset(entity_8, 'U', 51-1);
  entity_8[51-1]='';
  memset(entity_7, 'U', 21-1);
  entity_7[21-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  strcpy(entity_2, entity_8);
}