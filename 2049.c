void fun()
{
  int entity_6 = 93;
  entity_6 = 93;
  char* entity_5;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  char* entity_8;
  memset(entity_7, 'z', entity_6-1);
  entity_7[entity_6-1]='';
  entity_8 = (char*)malloc(62*sizeof(char));
  entity_8[62-1]='';
  entity_5 = (char*)malloc(45*sizeof(char));
  entity_5[45-1]='';
  strcpy(entity_5, entity_7);
}