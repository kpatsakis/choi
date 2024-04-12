void fun()
{
  int entity_1 = 8;
  char entity_7 = 'Y';
  char* entity_6;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  entity_6 = (char*)malloc(51*sizeof(char));
  entity_6[51-1]='';
  memset(entity_4, 'x', entity_1-1);
  entity_4[entity_1-1]='';
  entity_4[85] = 'G';
}