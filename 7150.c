void fun()
{
  int entity_9 = 90;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  char* entity_2;
  char entity_7[88] = "";
  entity_7 = NULL;
  char entity_4 = 'T';
  char entity_3[2] = "";
  entity_3 = NULL;
  memset(entity_3, 'I', 2-1);
  entity_3[2-1]='';
  entity_2 = (char*)malloc(26*sizeof(char));
  entity_2[26-1]='';
  memset(entity_7, 'X', 88-1);
  entity_7[88-1]='';
  memset(entity_1, 'O', entity_9-1);
  entity_1[entity_9-1]='';
  entity_9 = 63;
  strcpy(entity_2, entity_1);
}