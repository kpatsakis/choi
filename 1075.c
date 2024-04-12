void fun()
{
  int entity_7 = 30;
  int entity_4 = 85;
  char entity_1[18] = "";
  entity_1 = NULL;
  char entity_9[27] = "";
  entity_9 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  memset(entity_9, 'C', 27-1);
  entity_9[27-1]='';
  memset(entity_1, 'R', 18-1);
  entity_1[18-1]='';
  strcpy(entity_3, entity_9);
}