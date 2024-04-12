void fun()
{
  int entity_7 = 91;
  entity_7 = 91;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  char* entity_9;
  memset(entity_2, 'k', entity_7-1);
  entity_2[entity_7-1]='';
  entity_9 = (char*)malloc(68*sizeof(char));
  entity_9[68-1]='';
  strcpy(entity_9, entity_2);
}