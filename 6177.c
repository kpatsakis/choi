void fun()
{
  int entity_1 = 41;
  entity_1 = 41;
  char* entity_3;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char entity_7 = 'A';
  entity_3 = (char*)malloc(72*sizeof(char));
  entity_3[72-1]='';
  memset(entity_2, 'X', entity_1-1);
  entity_2[entity_1-1]='';
  strcpy(entity_3, entity_2);
}