void fun()
{
  int entity_3 = 13;
  entity_3 = 1;
  char entity_6[38] = "";
  entity_6 = NULL;
  char entity_4[38] = "";
  entity_4 = NULL;
  char* entity_1;
  memset(entity_6, 'T', 38-1);
  entity_6[38-1]='';
  memset(entity_4, 'V', 38-1);
  entity_4[38-1]='';
  entity_1 = (char*)malloc(50*sizeof(char));
  entity_1[50-1]='';
  entity_4[entity_3] = 'K';
}