void fun()
{
  char* entity_4;
  char* entity_0;
  char entity_7[23] = "";
  entity_4 = (char*)malloc(82*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'o', 23-1);
  entity_7[23-1]='0';
  entity_0 = (char*)malloc(92*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_4, entity_7);
}