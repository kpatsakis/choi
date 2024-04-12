void fun()
{
  int entity_6 = 5;
  int entity_1 = 61;
  char* entity_7;
  char entity_2[96] = "";
  entity_2 = NULL;
  char entity_0 = 'q';
  memset(entity_2, 'H', 96-1);
  entity_2[96-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  strcpy(entity_7, entity_2);
}