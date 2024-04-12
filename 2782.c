void fun()
{
  int entity_6 = 66;
  char entity_2 = 'h';
  char entity_1[24] = "";
  entity_1 = NULL;
  char entity_9 = 'X';
  char* entity_5;
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  memset(entity_1, 'c', 24-1);
  entity_1[24-1]='';
  entity_6 = 90;
  strcpy(entity_5, entity_1);
}