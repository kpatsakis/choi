void fun()
{
  int entity_3 = 8;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  char* entity_2;
  char entity_6 = 'e';
  memset(entity_7, 'P', entity_3-1);
  entity_7[entity_3-1]='';
  entity_2 = (char*)malloc(51*sizeof(char));
  entity_2[51-1]='';
  entity_3 = 30;
  strcpy(entity_2, entity_7);
}