void fun()
{
  int entity_4 = 94;
  int entity_1 = 17;
  entity_1 = 79;
  char entity_7[44] = "";
  entity_7 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memset(entity_7, 'T', 44-1);
  entity_7[44-1]='';
  strcpy(entity_3, entity_7);
}