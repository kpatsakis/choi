void fun()
{
  char entity_1[59] = "";
  entity_1 = NULL;
  char* entity_5;
  char* entity_7;
  memset(entity_1, 'G', 59-1);
  entity_1[59-1]='';
  entity_5 = (char*)malloc(4*sizeof(char));
  entity_5[4-1]='';
  entity_7 = (char*)malloc(17*sizeof(char));
  entity_7[17-1]='';
  memcpy(entity_5, entity_1, 59*sizeof(char));
}