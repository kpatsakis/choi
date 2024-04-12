void fun()
{
  char* entity_3;
  char* entity_7;
  char entity_4[17] = "";
  entity_4 = NULL;
  entity_7 = (char*)malloc(67*sizeof(char));
  entity_7[67-1]='';
  memset(entity_4, 't', 17-1);
  entity_4[17-1]='';
  entity_3 = (char*)malloc(86*sizeof(char));
  entity_3[86-1]='';
  memcpy(entity_7, entity_4, 17*sizeof(char));
}