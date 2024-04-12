void fun()
{
  char entity_1[64] = "";
  entity_1 = NULL;
  char* entity_3;
  char* entity_7;
  entity_3 = (char*)malloc(23*sizeof(char));
  entity_3[23-1]='';
  memset(entity_1, 'J', 64-1);
  entity_1[64-1]='';
  entity_7 = (char*)malloc(95*sizeof(char));
  entity_7[95-1]='';
  entity_1[91] = 'R';
}