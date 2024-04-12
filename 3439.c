void fun()
{
  int entity_6 = 39;
  int entity_2 = 90;
  char* entity_7;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  entity_7 = (char*)malloc(9*sizeof(char));
  entity_7[9-1]='';
  memset(entity_5, 'f', entity_2-1);
  entity_5[entity_2-1]='';
  entity_2 = 92;
  strcpy(entity_7, entity_5);
}