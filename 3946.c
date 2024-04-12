void fun()
{
  char entity_3[49] = "";
  entity_3 = NULL;
  char* entity_9;
  char entity_0[50] = "";
  entity_0 = NULL;
  char entity_7[85] = "";
  entity_7 = NULL;
  memset(entity_3, 'q', 49-1);
  entity_3[49-1]='';
  entity_9 = (char*)malloc(5*sizeof(char));
  entity_9[5-1]='';
  memset(entity_7, 'T', 85-1);
  entity_7[85-1]='';
  memset(entity_0, 'g', 50-1);
  entity_0[50-1]='';
  entity_7[19] = 'H';
}