void fun()
{
  int entity_2 = 38;
  char entity_8 = 'a';
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(31*sizeof(char));
  entity_4[31-1]='';
  memset(entity_5, 'R', entity_2-1);
  entity_5[entity_2-1]='';
  entity_2 = 47;
  memcpy(entity_4, entity_5, entity_2*sizeof(char));
}