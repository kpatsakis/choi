void fun()
{
  int entity_1 = 16;
  char entity_2[21] = "";
  entity_2 = NULL;
  char* entity_5;
  memset(entity_2, 'G', 21-1);
  entity_2[21-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  entity_1 = 29;
  strcpy(entity_5, entity_2);
}