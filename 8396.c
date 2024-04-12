void fun()
{
  char* entity_6;
  char entity_0 = 'H';
  char* entity_5;
  char entity_7[53] = "";
  entity_7 = NULL;
  memset(entity_7, 'n', 53-1);
  entity_7[53-1]='';
  entity_6 = (char*)malloc(40*sizeof(char));
  entity_6[40-1]='';
  entity_5 = (char*)malloc(99*sizeof(char));
  entity_5[99-1]='';
  strcpy(entity_6, entity_7);
}