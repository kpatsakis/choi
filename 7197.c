void fun()
{
  char* entity_1;
  char entity_6[11] = "";
  entity_6 = NULL;
  char* entity_3;
  entity_1 = (char*)malloc(4*sizeof(char));
  entity_1[4-1]='';
  entity_3 = (char*)malloc(91*sizeof(char));
  entity_3[91-1]='';
  memset(entity_6, 'E', 11-1);
  entity_6[11-1]='';
  memcpy(entity_1, entity_6, 11*sizeof(char));
}