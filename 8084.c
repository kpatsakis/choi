void fun()
{
  int entity_4 = 3;
  char* entity_6;
  char entity_5[74] = "";
  entity_5 = NULL;
  memset(entity_5, 'O', 74-1);
  entity_5[74-1]='';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  strcpy(entity_6, entity_5);
}