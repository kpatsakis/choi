void fun()
{
  int entity_1 = 23;
  char entity_7[15] = "";
  entity_7 = NULL;
  char* entity_2;
  memset(entity_7, 'r', 15-1);
  entity_7[15-1]='';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  entity_1 = 71;
  strcpy(entity_2, entity_7);
}