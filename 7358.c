void fun()
{
  int entity_1 = 23;
  char* entity_5;
  char entity_2[35] = "";
  entity_2 = NULL;
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  memset(entity_2, 'p', 35-1);
  entity_2[35-1]='';
  strcpy(entity_5, entity_2);
}