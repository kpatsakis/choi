void fun()
{
  int entity_1 = 51;
  int entity_9 = 4;
  char* entity_2;
  char entity_4[3] = "";
  entity_4 = NULL;
  char entity_3[57] = "";
  entity_3 = NULL;
  memset(entity_4, 'l', 3-1);
  entity_4[3-1]='';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_3, 'X', 57-1);
  entity_3[57-1]='';
  entity_1 = 60;
  strcpy(entity_2, entity_3);
}