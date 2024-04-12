void fun()
{
  char entity_8[56] = "";
  entity_8 = NULL;
  char* entity_1;
  char entity_0[80] = "";
  entity_0 = NULL;
  char* entity_6;
  char entity_9[21] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(10*sizeof(char));
  entity_6[10-1]='';
  memset(entity_9, 'r', 21-1);
  entity_9[21-1]='';
  memset(entity_8, 'n', 56-1);
  entity_8[56-1]='';
  entity_1 = (char*)malloc(51*sizeof(char));
  entity_1[51-1]='';
  memset(entity_0, 'v', 80-1);
  entity_0[80-1]='';
  memcpy(entity_1, entity_0, 80*sizeof(char));
}