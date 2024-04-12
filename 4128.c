void fun()
{
  int entity_6 = 79;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_3;
  char* entity_5;
  char entity_8 = 'L';
  entity_3 = (char*)malloc(9*sizeof(char));
  entity_3[9-1]='';
  entity_5 = (char*)malloc(11*sizeof(char));
  entity_5[11-1]='';
  memset(entity_4, 'f', entity_6-1);
  entity_4[entity_6-1]='';
  entity_6 = 56;
  strcpy(entity_5, entity_4);
}