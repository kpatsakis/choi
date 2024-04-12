void fun()
{
  int entity_6 = 65;
  int entity_1 = 97;
  char* entity_8;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  entity_8 = (char*)malloc(82*sizeof(char));
  entity_8[82-1]='';
  memset(entity_9, 'c', entity_1-1);
  entity_9[entity_1-1]='';
  entity_1 = 65;
  strcpy(entity_8, entity_9);
}