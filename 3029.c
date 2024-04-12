void fun()
{
  int entity_4 = 85;
  char* entity_7;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  memset(entity_2, 'L', entity_4-1);
  entity_2[entity_4-1]='';
  entity_7 = (char*)malloc(28*sizeof(char));
  entity_7[28-1]='';
  entity_4 = 27;
  strcpy(entity_7, entity_2);
}