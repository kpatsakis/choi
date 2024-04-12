void fun()
{
  int entity_7 = 77;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_1;
  char entity_6 = 'g';
  entity_1 = (char*)malloc(76*sizeof(char));
  entity_1[76-1]='';
  memset(entity_3, 'y', entity_7-1);
  entity_3[entity_7-1]='';
  strcpy(entity_1, entity_3);
}