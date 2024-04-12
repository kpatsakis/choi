void fun()
{
  char* entity_8;
  char* entity_5;
  char entity_1[74] = "";
  entity_8 = (char*)malloc(12*sizeof(char));
  entity_8[0]='0';
  entity_5 = (char*)malloc(6*sizeof(char));
  entity_5[0]='0';
  memset(entity_1, 'T', 74-1);
  entity_1[74-1]='0';
  entity_1[96] = 'w';
}