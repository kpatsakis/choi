void fun()
{
  int entity_3 = 12;
  char* entity_6;
  char* entity_2;
  char entity_1[19] = "";
  entity_1 = NULL;
  memset(entity_1, 'F', 19-1);
  entity_1[19-1]='';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  entity_6 = (char*)malloc(17*sizeof(char));
  entity_6[17-1]='';
  entity_3 = 45;
  strcpy(entity_2, entity_1);
}