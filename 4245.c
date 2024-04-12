void fun()
{
  int entity_4 = 52;
  char entity_8 = 'K';
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  char entity_1[54] = "";
  entity_1 = NULL;
  char* entity_2;
  memset(entity_1, 'n', 54-1);
  entity_1[54-1]='';
  memset(entity_7, 'i', entity_4-1);
  entity_7[entity_4-1]='';
  entity_2 = (char*)malloc(20*sizeof(char));
  entity_2[20-1]='';
  strcpy(entity_2, entity_7);
}