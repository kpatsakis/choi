void fun()
{
  int entity_1 = 3;
  int entity_2 = 13;
  char* entity_3;
  char entity_7[69] = "";
  entity_7 = NULL;
  memset(entity_7, 't', 69-1);
  entity_7[69-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  entity_1 = 86;
  strcpy(entity_3, entity_7);
}