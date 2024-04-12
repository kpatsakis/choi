void fun()
{
  int entity_6 = 95;
  entity_6 = 95;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_3;
  memset(entity_4, 'W', entity_6-1);
  entity_4[entity_6-1]='';
  entity_3 = (char*)malloc(25*sizeof(char));
  entity_3[25-1]='';
  strcpy(entity_3, entity_4);
}