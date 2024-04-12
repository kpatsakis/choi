void fun()
{
  int entity_1 = 74;
  char* entity_2;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  memset(entity_4, 'E', entity_1-1);
  entity_4[entity_1-1]='';
  entity_2 = (char*)malloc(31*sizeof(char));
  entity_2[31-1]='';
  strcpy(entity_2, entity_4);
}