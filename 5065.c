void fun()
{
  int entity_7 = 100;
  char* entity_6;
  char entity_4 = 'H';
  char entity_9[34] = "";
  entity_9 = NULL;
  char entity_2[42] = "";
  entity_2 = NULL;
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[entity_7-1]='';
  memset(entity_9, 'N', 34-1);
  entity_9[34-1]='';
  memset(entity_2, 'X', 42-1);
  entity_2[42-1]='';
  strcpy(entity_6, entity_2);
}