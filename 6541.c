void fun()
{
  int entity_2 = 15;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char* entity_5;
  memset(entity_4, 's', entity_2-1);
  entity_4[entity_2-1]='';
  entity_5 = (char*)malloc(95*sizeof(char));
  entity_5[95-1]='';
  strcpy(entity_5, entity_4);
}