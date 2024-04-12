void fun()
{
  int entity_7 = 56;
  entity_7 = 48;
  char entity_4 = 't';
  char entity_1 = 'x';
  char* entity_8;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  memset(entity_5, 'p', entity_7-1);
  entity_5[entity_7-1]='';
  entity_8 = (char*)malloc(67*sizeof(char));
  entity_8[67-1]='';
  memcpy(entity_8, entity_5, entity_7*sizeof(char));
}