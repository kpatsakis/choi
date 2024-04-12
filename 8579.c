void fun()
{
  int entity_5 = 41;
  char* entity_2;
  char entity_7[43] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memset(entity_7, 'F', 43-1);
  entity_7[43-1]='';
  strcpy(entity_2, entity_7);
}