void fun()
{
  int entity_1 = 12;
  entity_1 = 1;
  char entity_3 = 'd';
  char entity_0 = 'i';
  char* entity_2;
  char entity_4 = 'a';
  char entity_7[55] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_7, 'c', 55-1);
  entity_7[55-1]='';
  strcpy(entity_2, entity_7);
}