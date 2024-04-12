void fun()
{
  int entity_3 = 34;
  char* entity_2;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[59-1]='';
  memset(entity_1, 'V', entity_3-1);
  entity_1[entity_3-1]='';
  strcpy(entity_2, entity_1);
}