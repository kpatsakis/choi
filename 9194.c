void fun()
{
  int entity_3 = 50;
  char entity_8 = 'C';
  char entity_7[44] = "";
  entity_7 = NULL;
  char* entity_6;
  memset(entity_7, 'E', 44-1);
  entity_7[44-1]='';
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[entity_3-1]='';
  entity_3 = 75;
  strcpy(entity_6, entity_7);
}