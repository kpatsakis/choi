void fun()
{
  int entity_4 = 55;
  char* entity_6;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  memset(entity_3, 'E', entity_4-1);
  entity_3[entity_4-1]='';
  entity_6 = (char*)malloc(57*sizeof(char));
  entity_6[57-1]='';
  strcpy(entity_6, entity_3);
}