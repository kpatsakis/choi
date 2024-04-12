void fun()
{
  int entity_9 = 26;
  int entity_4 = 79;
  char* entity_2;
  char entity_3[42] = "";
  entity_3 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(20*sizeof(char));
  entity_1[20-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_3, 'n', 42-1);
  entity_3[42-1]='';
  entity_4 = 15;
  strcpy(entity_2, entity_3);
}