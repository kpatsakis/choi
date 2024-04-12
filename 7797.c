void fun()
{
  int entity_4 = 33;
  char entity_1[30] = "";
  entity_1 = NULL;
  char* entity_3;
  char* entity_7;
  memset(entity_1, 'c', 30-1);
  entity_1[30-1]='';
  entity_7 = (char*)malloc(31*sizeof(char));
  entity_7[31-1]='';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  strcpy(entity_3, entity_1);
}