void fun()
{
  int entity_4 = 65;
  int entity_3 = 32;
  char entity_1[6] = "";
  entity_1 = NULL;
  char* entity_2;
  memset(entity_1, 'c', 6-1);
  entity_1[6-1]='';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  entity_3 = 79;
  strcpy(entity_2, entity_1);
}