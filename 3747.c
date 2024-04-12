void fun()
{
  int entity_8 = 81;
  entity_8 = 81;
  char entity_2 = 'D';
  char entity_9 = 'S';
  char* entity_5;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(62*sizeof(char));
  entity_5[62-1]='';
  memset(entity_4, 'j', entity_8-1);
  entity_4[entity_8-1]='';
  strcpy(entity_5, entity_4);
}