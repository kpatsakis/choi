void fun()
{
  int entity_2 = 65;
  int entity_6 = 3;
  char* entity_5;
  char entity_3[19] = "";
  entity_3 = NULL;
  char entity_1 = 'm';
  memset(entity_3, 'y', 19-1);
  entity_3[19-1]='';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  strcpy(entity_5, entity_3);
}