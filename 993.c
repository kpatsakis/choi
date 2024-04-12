void fun()
{
  int entity_0 = 17;
  char entity_3[93] = "";
  entity_3 = NULL;
  char entity_2[20] = "";
  entity_2 = NULL;
  char* entity_8;
  char* entity_7;
  memset(entity_2, 'c', 20-1);
  entity_2[20-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  entity_8 = (char*)malloc(73*sizeof(char));
  entity_8[73-1]='';
  memset(entity_3, 'G', 93-1);
  entity_3[93-1]='';
  strcpy(entity_7, entity_2);
}