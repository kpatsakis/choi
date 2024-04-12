void fun()
{
  int entity_8 = 67;
  char* entity_3;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_7;
  memset(entity_4, 'P', entity_8-1);
  entity_4[entity_8-1]='';
  entity_3 = (char*)malloc(17*sizeof(char));
  entity_3[17-1]='';
  entity_7 = (char*)malloc(83*sizeof(char));
  entity_7[83-1]='';
  entity_8 = 37;
  memcpy(entity_7, entity_4, entity_8*sizeof(char));
}