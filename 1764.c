void fun()
{
  int entity_7 = 17;
  entity_7 = 99;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char* entity_1;
  char entity_0 = 'r';
  memset(entity_6, 'Q', entity_7-1);
  entity_6[entity_7-1]='';
  entity_1 = (char*)malloc(67*sizeof(char));
  entity_1[67-1]='';
  memcpy(entity_1, entity_6, entity_7*sizeof(char));
}