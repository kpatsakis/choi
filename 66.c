void fun()
{
  char entity_5 = 'u';
  char* entity_8;
  char entity_6 = 'z';
  char entity_1[2] = "";
  entity_1 = NULL;
  entity_8 = (char*)malloc(51*sizeof(char));
  entity_8[51-1]='';
  memset(entity_1, 'q', 2-1);
  entity_1[2-1]='';
  entity_1[81] = 'l';
}