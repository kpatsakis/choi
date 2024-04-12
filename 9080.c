void fun()
{
  int entity_1 = 80;
  int entity_5 = 66;
  char* entity_7;
  char entity_6[13] = "";
  entity_6 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  memset(entity_6, 'V', 13-1);
  entity_6[13-1]='';
  entity_7 = (char*)malloc(71*sizeof(char));
  entity_7[71-1]='';
  memcpy(entity_4, entity_6, 13*sizeof(char));
}