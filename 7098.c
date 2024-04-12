void fun()
{
  int entity_8 = 12;
  char* entity_1;
  char entity_5 = 'F';
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(70*sizeof(char));
  entity_1[70-1]='';
  memset(entity_3, 'N', entity_8-1);
  entity_3[entity_8-1]='';
  entity_8 = 22;
  strcpy(entity_1, entity_3);
}