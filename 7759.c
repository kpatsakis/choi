void fun()
{
  char entity_3 = 'y';
  char* entity_8;
  char entity_9[40] = "";
  entity_9 = NULL;
  entity_8 = (char*)malloc(65*sizeof(char));
  entity_8[65-1]='';
  memset(entity_9, 'q', 40-1);
  entity_9[40-1]='';
  entity_9[64] = 'b';
}