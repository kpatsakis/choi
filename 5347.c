void fun()
{
  int entity_8 = 98;
  char* entity_3;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'R', entity_8-1);
  entity_7[entity_8-1]='';
  entity_3 = (char*)malloc(33*sizeof(char));
  entity_3[33-1]='';
  strcpy(entity_3, entity_7);
}