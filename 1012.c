void fun()
{
  int entity_2 = 17;
  int entity_8 = 59;
  entity_8 = 59;
  char* entity_3;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  memset(entity_1, 'Q', entity_8-1);
  entity_1[entity_8-1]='';
  entity_3 = (char*)malloc(23*sizeof(char));
  entity_3[23-1]='';
  strcpy(entity_3, entity_1);
}