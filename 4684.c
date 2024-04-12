void fun()
{
  int entity_6 = 77;
  char entity_7 = 'O';
  char* entity_2;
  char entity_4[33] = "";
  entity_4 = NULL;
  memset(entity_4, 'v', 33-1);
  entity_4[33-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  entity_6 = 87;
  strcpy(entity_2, entity_4);
}