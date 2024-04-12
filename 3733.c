void fun()
{
  char entity_4[59] = "";
  entity_4 = NULL;
  char* entity_6;
  char* entity_3;
  memset(entity_4, 'x', 59-1);
  entity_4[59-1]='';
  entity_3 = (char*)malloc(82*sizeof(char));
  entity_3[82-1]='';
  entity_6 = (char*)malloc(37*sizeof(char));
  entity_6[37-1]='';
  memcpy(entity_3, entity_4, 59*sizeof(char));
}