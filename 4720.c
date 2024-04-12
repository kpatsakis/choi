void fun()
{
  int entity_8 = 49;
  int entity_6 = 14;
  int entity_3 = 61;
  entity_6 = 43;
  char entity_5[99] = "";
  entity_5 = NULL;
  char* entity_2;
  memset(entity_5, 'Z', 99-1);
  entity_5[99-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  strcpy(entity_2, entity_5);
}