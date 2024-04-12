void fun()
{
  int entity_2 = 85;
  char entity_7[11] = "";
  entity_7 = NULL;
  char* entity_5;
  char entity_4 = 'd';
  memset(entity_7, 'b', 11-1);
  entity_7[11-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  strcpy(entity_5, entity_7);
}