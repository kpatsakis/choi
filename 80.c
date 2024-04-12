void fun()
{
  int entity_1 = 26;
  char* entity_3;
  char entity_9 = 'P';
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  memset(entity_7, 'R', entity_1-1);
  entity_7[entity_1-1]='';
  entity_3 = (char*)malloc(65*sizeof(char));
  entity_3[65-1]='';
  entity_1 = 44;
  strcpy(entity_3, entity_7);
}