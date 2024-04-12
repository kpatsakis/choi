void fun()
{
  int entity_4 = 34;
  char entity_6[36] = "";
  entity_6 = NULL;
  char entity_5[75] = "";
  entity_5 = NULL;
  char entity_3[60] = "";
  entity_3 = NULL;
  char* entity_0;
  memset(entity_6, 'H', 36-1);
  entity_6[36-1]='';
  memset(entity_3, 'g', 60-1);
  entity_3[60-1]='';
  memset(entity_5, 'b', 75-1);
  entity_5[75-1]='';
  entity_0 = (char*)malloc(28*sizeof(char));
  entity_0[28-1]='';
  entity_3[entity_4] = 'l';
}