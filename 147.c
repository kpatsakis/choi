void fun()
{
  int entity_2 = 73;
  char* entity_9;
  char entity_1[70] = "";
  entity_1 = NULL;
  memset(entity_1, 'u', 70-1);
  entity_1[70-1]='';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  strcpy(entity_9, entity_1);
}