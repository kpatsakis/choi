void fun()
{
  int entity_8 = 31;
  char entity_5 = 'H';
  char* entity_2;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  memset(entity_1, 'y', entity_8-1);
  entity_1[entity_8-1]='';
  entity_2 = (char*)malloc(62*sizeof(char));
  entity_2[62-1]='';
  entity_8 = 85;
  memcpy(entity_2, entity_1, entity_8*sizeof(char));
}