void fun()
{
  int entity_6 = 45;
  char* entity_5;
  char entity_4 = 'A';
  char entity_7[53] = "";
  entity_7 = NULL;
  memset(entity_7, 'B', 53-1);
  entity_7[53-1]='';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  entity_6 = 61;
  strcpy(entity_5, entity_7);
}