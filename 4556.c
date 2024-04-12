void fun()
{
  int entity_5 = 75;
  entity_5 = 30;
  char entity_3[92] = "";
  entity_3 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_3, 'x', 92-1);
  entity_3[92-1]='';
  strcpy(entity_1, entity_3);
}