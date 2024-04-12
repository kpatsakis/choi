void fun()
{
  int entity_9 = 1;
  int entity_7 = 81;
  char* entity_2;
  char* entity_3;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  entity_3 = (char*)malloc(50*sizeof(char));
  entity_3[50-1]='';
  memset(entity_1, 'Q', entity_7-1);
  entity_1[entity_7-1]='';
  entity_2 = (char*)malloc(7*sizeof(char));
  entity_2[7-1]='';
  entity_7 = 4;
  strcpy(entity_2, entity_1);
}