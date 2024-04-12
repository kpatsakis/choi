void fun()
{
  int entity_2 = 89;
  int entity_4 = 16;
  char* entity_6;
  char entity_5[59] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_5, 'f', 59-1);
  entity_5[59-1]='';
  memcpy(entity_6, entity_5, 59*sizeof(char));
}