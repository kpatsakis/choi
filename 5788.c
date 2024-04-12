void fun()
{
  char entity_3[75] = "";
  entity_3 = NULL;
  char* entity_6;
  char entity_1[8] = "";
  entity_1 = NULL;
  char entity_9[1] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(12*sizeof(char));
  entity_6[12-1]='';
  memset(entity_3, 'r', 75-1);
  entity_3[75-1]='';
  memset(entity_9, 'E', 1-1);
  entity_9[1-1]='';
  memset(entity_1, 'x', 8-1);
  entity_1[8-1]='';
  memcpy(entity_6, entity_9, 1*sizeof(char));
}