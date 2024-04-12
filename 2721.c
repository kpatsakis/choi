void fun()
{
  char entity_5[88] = "";
  entity_5 = NULL;
  char* entity_6;
  char entity_9[63] = "";
  entity_9 = NULL;
  memset(entity_5, 'E', 88-1);
  entity_5[88-1]='';
  entity_6 = (char*)malloc(16*sizeof(char));
  entity_6[16-1]='';
  memset(entity_9, 'O', 63-1);
  entity_9[63-1]='';
  strcpy(entity_6, entity_9);
}