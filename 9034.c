void fun()
{
  char entity_7[2] = "";
  entity_7 = NULL;
  char* entity_8;
  char entity_9[86] = "";
  entity_9 = NULL;
  char* entity_2;
  entity_8 = (char*)malloc(49*sizeof(char));
  entity_8[49-1]='';
  memset(entity_7, 'N', 2-1);
  entity_7[2-1]='';
  memset(entity_9, 'B', 86-1);
  entity_9[86-1]='';
  entity_2 = (char*)malloc(17*sizeof(char));
  entity_2[17-1]='';
  strcpy(entity_8, entity_9);
}