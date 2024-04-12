void fun()
{
  int entity_1 = 16;
  char entity_5[89] = "";
  entity_5 = NULL;
  char* entity_4;
  char* entity_2;
  char entity_6[52] = "";
  entity_6 = NULL;
  memset(entity_5, 'c', 89-1);
  entity_5[89-1]='';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  entity_2 = (char*)malloc(30*sizeof(char));
  entity_2[30-1]='';
  memset(entity_6, 'K', 52-1);
  entity_6[52-1]='';
  strcpy(entity_4, entity_5);
}