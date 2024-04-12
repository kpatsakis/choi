void fun()
{
  int entity_2 = 60;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(81*sizeof(char));
  entity_3[81-1]='';
  memset(entity_4, 'D', entity_2-1);
  entity_4[entity_2-1]='';
  entity_2 = 63;
  strcpy(entity_3, entity_4);
}