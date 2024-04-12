void fun()
{
  int entity_9 = 33;
  char* entity_2;
  char entity_7 = 'C';
  char entity_3[33] = "";
  entity_3 = NULL;
  memset(entity_3, 'o', 33-1);
  entity_3[33-1]='';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  strcpy(entity_2, entity_3);
}