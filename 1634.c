void fun()
{
  int entity_0 = 29;
  int entity_7 = 90;
  char* entity_3;
  char entity_8 = 'b';
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  memset(entity_4, 'k', entity_7-1);
  entity_4[entity_7-1]='';
  entity_3 = (char*)malloc(65*sizeof(char));
  entity_3[65-1]='';
  entity_7 = 62;
  memcpy(entity_3, entity_4, entity_7*sizeof(char));
}