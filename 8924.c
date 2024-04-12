void fun()
{
  int entity_6 = 21;
  int entity_1 = 83;
  char* entity_7;
  char entity_8[10] = "";
  entity_8 = NULL;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  entity_7 = (char*)malloc(47*sizeof(char));
  entity_7[47-1]='';
  memset(entity_8, 'V', 10-1);
  entity_8[10-1]='';
  memset(entity_5, 'M', entity_1-1);
  entity_5[entity_1-1]='';
  memcpy(entity_7, entity_5, entity_1*sizeof(char));
}