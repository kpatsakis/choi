void fun()
{
  int entity_2 = 46;
  char entity_6[54] = "";
  entity_6 = NULL;
  char entity_1 = 'T';
  char* entity_5;
  memset(entity_6, 'B', 54-1);
  entity_6[54-1]='';
  entity_5 = (char*)malloc(49*sizeof(char));
  entity_5[49-1]='';
  entity_6[22] = 'f';
}