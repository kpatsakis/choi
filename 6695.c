void fun()
{
  int entity_6 = 79;
  char entity_8 = 'l';
  char entity_1[44] = "";
  entity_1 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  memset(entity_1, 't', 44-1);
  entity_1[44-1]='';
  entity_6 = 6;
  memcpy(entity_5, entity_1, 44*sizeof(char));
}