void fun()
{
  char entity_3[92] = "";
  entity_3 = NULL;
  char* entity_5;
  char entity_2 = 'U';
  char entity_1[91] = "";
  entity_1 = NULL;
  memset(entity_1, 'W', 91-1);
  entity_1[91-1]='';
  entity_5 = (char*)malloc(2*sizeof(char));
  entity_5[2-1]='';
  memset(entity_3, 'h', 92-1);
  entity_3[92-1]='';
  entity_1[30] = 'W';
}