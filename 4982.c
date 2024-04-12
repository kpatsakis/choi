void fun()
{
  char entity_5[12] = "";
  entity_5 = NULL;
  char* entity_2;
  char* entity_7;
  char* entity_8;
  entity_7 = (char*)malloc(2*sizeof(char));
  entity_7[2-1]='';
  memset(entity_5, 'L', 12-1);
  entity_5[12-1]='';
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[59-1]='';
  entity_8 = (char*)malloc(42*sizeof(char));
  entity_8[42-1]='';
  memcpy(entity_2, entity_5, 12*sizeof(char));
}