void fun()
{
  int entity_5 = 75;
  char entity_6[80] = "";
  entity_6 = NULL;
  char* entity_1;
  char entity_8[69] = "";
  entity_8 = NULL;
  memset(entity_6, 'g', 80-1);
  entity_6[80-1]='';
  entity_1 = (char*)malloc(60*sizeof(char));
  entity_1[60-1]='';
  memset(entity_8, 'j', 69-1);
  entity_8[69-1]='';
  memcpy(entity_1, entity_6, 80*sizeof(char));
}