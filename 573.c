void fun()
{
  int entity_8 = 40;
  char entity_7[11] = "";
  entity_7 = NULL;
  char* entity_4;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  memset(entity_7, 'V', 11-1);
  entity_7[11-1]='';
  memset(entity_5, 'M', entity_8-1);
  entity_5[entity_8-1]='';
  entity_4 = (char*)malloc(62*sizeof(char));
  entity_4[62-1]='';
  memcpy(entity_4, entity_5, entity_8*sizeof(char));
}