void fun()
{
  int entity_8 = 30;
  int entity_6 = 88;
  char entity_4[49] = "";
  entity_4 = NULL;
  char* entity_7;
  char entity_2 = 'v';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memset(entity_4, 'q', 49-1);
  entity_4[49-1]='';
  memcpy(entity_7, entity_4, 49*sizeof(char));
}