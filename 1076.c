void fun()
{
  int entity_3 = 96;
  entity_3 = 96;
  char* entity_8;
  char* entity_1;
  char entity_4 = 's';
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  entity_1 = (char*)malloc(48*sizeof(char));
  entity_1[48-1]='';
  memset(entity_7, 'l', entity_3-1);
  entity_7[entity_3-1]='';
  entity_8 = (char*)malloc(62*sizeof(char));
  entity_8[62-1]='';
  strcpy(entity_1, entity_7);
}