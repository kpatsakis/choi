void fun()
{
  int entity_6 = 44;
  char entity_7 = 't';
  char* entity_3;
  char entity_4[58] = "";
  entity_4 = NULL;
  memset(entity_4, 'B', 58-1);
  entity_4[58-1]='';
  entity_3 = (char*)malloc(14*sizeof(char));
  entity_3[14-1]='';
  entity_4[91] = 'D';
}