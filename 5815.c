void fun()
{
  int entity_3 = 59;
  int entity_5 = 46;
  char entity_7 = 'y';
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(8*sizeof(char));
  entity_8[8-1]='';
  memset(entity_1, 'Z', entity_5-1);
  entity_1[entity_5-1]='';
  memcpy(entity_8, entity_1, entity_5*sizeof(char));
}