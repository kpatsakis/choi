void fun()
{
  int entity_6 = 61;
  char* entity_1;
  char entity_3[8] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memset(entity_3, 'e', 8-1);
  entity_3[8-1]='';
  strcpy(entity_1, entity_3);
}