void fun()
{
  int entity_9 = 99;
  int entity_6 = 85;
  char entity_2[80] = "";
  entity_2 = NULL;
  char entity_1[34] = "";
  entity_1 = NULL;
  char* entity_8;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  memset(entity_4, 'a', entity_9-1);
  entity_4[entity_9-1]='';
  entity_8 = (char*)malloc(16*sizeof(char));
  entity_8[16-1]='';
  memset(entity_1, 'g', 34-1);
  entity_1[34-1]='';
  memset(entity_2, 'n', 80-1);
  entity_2[80-1]='';
  strcpy(entity_8, entity_4);
}