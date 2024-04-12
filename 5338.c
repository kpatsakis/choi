void fun()
{
  char* entity_2;
  char entity_1[30] = "";
  entity_1 = NULL;
  char entity_7[52] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(22*sizeof(char));
  entity_2[22-1]='';
  memset(entity_1, 'i', 30-1);
  entity_1[30-1]='';
  memset(entity_7, 'O', 52-1);
  entity_7[52-1]='';
  strcpy(entity_2, entity_1);
}