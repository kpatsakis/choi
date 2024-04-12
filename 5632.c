void fun()
{
  int entity_1 = 14;
  char entity_7[76] = "";
  entity_7 = NULL;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char* entity_5;
  memset(entity_4, 'i', entity_1-1);
  entity_4[entity_1-1]='';
  entity_5 = (char*)malloc(45*sizeof(char));
  entity_5[45-1]='';
  memset(entity_7, 'F', 76-1);
  entity_7[76-1]='';
  memcpy(entity_5, entity_4, entity_1*sizeof(char));
}