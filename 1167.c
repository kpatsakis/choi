void fun()
{
  int entity_8 = 42;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char entity_4[59] = "";
  entity_4 = NULL;
  char* entity_2;
  memset(entity_1, 'k', entity_8-1);
  entity_1[entity_8-1]='';
  memset(entity_4, 'q', 59-1);
  entity_4[59-1]='';
  entity_2 = (char*)malloc(6*sizeof(char));
  entity_2[6-1]='';
  memcpy(entity_2, entity_1, entity_8*sizeof(char));
}