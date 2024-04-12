void fun()
{
  int entity_7 = 22;
  entity_7 = 30;
  char* entity_5;
  char entity_4[86] = "";
  entity_4 = NULL;
  char entity_8[58] = "";
  entity_8 = NULL;
  char entity_6 = 'j';
  entity_5 = (char*)malloc(2*sizeof(char));
  entity_5[2-1]='';
  memset(entity_4, 'r', 86-1);
  entity_4[86-1]='';
  memset(entity_8, 'A', 58-1);
  entity_8[58-1]='';
  entity_8[entity_7] = 'w';
}