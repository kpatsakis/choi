void fun()
{
  int entity_1 = 4;
  entity_1 = 4;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_7;
  memset(entity_2, 'Y', entity_1-1);
  entity_2[entity_1-1]='';
  entity_7 = (char*)malloc(43*sizeof(char));
  entity_7[43-1]='';
  strcpy(entity_7, entity_2);
}