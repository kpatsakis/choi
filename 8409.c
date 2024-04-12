void fun()
{
  int entity_2 = 5;
  char* entity_9;
  char entity_7[55] = "";
  entity_7 = NULL;
  entity_9 = (char*)malloc(96*sizeof(char));
  entity_9[96-1]='';
  memset(entity_7, 'I', 55-1);
  entity_7[55-1]='';
  strcpy(entity_9, entity_7);
}