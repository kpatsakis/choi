void fun()
{
  int entity_6 = 96;
  int entity_4 = 21;
  entity_4 = 21;
  char* entity_9;
  char* entity_8;
  char entity_1 = 'I';
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(12*sizeof(char));
  entity_9[12-1]='';
  memset(entity_2, 'Z', entity_4-1);
  entity_2[entity_4-1]='';
  entity_8 = (char*)malloc(62*sizeof(char));
  entity_8[62-1]='';
  strcpy(entity_9, entity_2);
}