void fun()
{
  int entity_5 = 33;
  int entity_2 = 83;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  char* entity_4;
  memset(entity_3, 'A', entity_2-1);
  entity_3[entity_2-1]='';
  entity_4 = (char*)malloc(21*sizeof(char));
  entity_4[21-1]='';
  strcpy(entity_4, entity_3);
}