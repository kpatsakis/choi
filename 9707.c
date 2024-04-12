void fun()
{
  char* entity_6;
  char entity_3[28] = "";
  entity_3 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(40*sizeof(char));
  entity_7[40-1]='';
  entity_6 = (char*)malloc(81*sizeof(char));
  entity_6[81-1]='';
  memset(entity_3, 'Y', 28-1);
  entity_3[28-1]='';
  memcpy(entity_6, entity_3, 28*sizeof(char));
}