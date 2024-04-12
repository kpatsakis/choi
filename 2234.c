void fun()
{
  int entity_2 = 66;
  char* entity_3;
  char entity_0 = 'L';
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char* entity_7;
  char entity_6 = 'm';
  entity_7 = (char*)malloc(89*sizeof(char));
  entity_7[89-1]='';
  entity_3 = (char*)malloc(44*sizeof(char));
  entity_3[44-1]='';
  memset(entity_5, 'p', entity_2-1);
  entity_5[entity_2-1]='';
  entity_2 = 67;
  strcpy(entity_3, entity_5);
}