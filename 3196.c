void fun()
{
  int entity_6 = 1;
  int entity_7 = 65;
  char entity_4[25] = "";
  entity_4 = NULL;
  char* entity_9;
  char entity_2 = 'r';
  char* entity_1;
  entity_1 = (char*)malloc(21*sizeof(char));
  entity_1[21-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memset(entity_4, 'R', 25-1);
  entity_4[25-1]='';
  strcpy(entity_9, entity_4);
}