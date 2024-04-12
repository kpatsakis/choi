void fun()
{
  int entity_5 = 18;
  char entity_4 = 'P';
  char entity_8 = 'A';
  char* entity_9;
  char entity_3[74] = "";
  entity_3 = NULL;
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[entity_5-1]='';
  memset(entity_3, 'I', 74-1);
  entity_3[74-1]='';
  strcpy(entity_9, entity_3);
}