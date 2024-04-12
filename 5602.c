void fun()
{
  int entity_4 = 70;
  entity_4 = 92;
  char entity_1[28] = "";
  entity_1 = NULL;
  char entity_9[9] = "";
  entity_9 = NULL;
  char* entity_7;
  char* entity_2;
  entity_7 = (char*)malloc(75*sizeof(char));
  entity_7[75-1]='';
  memset(entity_9, 'O', 9-1);
  entity_9[9-1]='';
  memset(entity_1, 'E', 28-1);
  entity_1[28-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  strcpy(entity_2, entity_1);
}