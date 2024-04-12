void fun()
{
  int entity_2 = 13;
  int entity_1 = 64;
  int entity_8 = 12;
  char entity_5[30] = "";
  entity_5 = NULL;
  char* entity_3;
  memset(entity_5, 'y', 30-1);
  entity_5[30-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  strcpy(entity_3, entity_5);
}