void fun()
{
  int entity_7 = 51;
  int entity_2 = 80;
  entity_7 = 84;
  char* entity_3;
  char entity_9[21] = "";
  entity_9 = NULL;
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  memset(entity_9, 'Z', 21-1);
  entity_9[21-1]='';
  strcpy(entity_3, entity_9);
}