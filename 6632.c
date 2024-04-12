void fun()
{
  int entity_2 = 87;
  entity_2 = 87;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  char* entity_7;
  char entity_8 = 'H';
  memset(entity_1, 'B', entity_2-1);
  entity_1[entity_2-1]='';
  entity_7 = (char*)malloc(34*sizeof(char));
  entity_7[34-1]='';
  strcpy(entity_7, entity_1);
}