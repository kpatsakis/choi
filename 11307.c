void fun()
{
  char entity_0 = 'i';
  char entity_2 = 'l';
  char entity_6[10] = "";
  char* entity_3;
  char* entity_1;
  memset(entity_6, 'y', 10-1);
  entity_6[10-1]='0';
  entity_3 = (char*)malloc(2*sizeof(char));
  entity_3[0]='0';
  entity_1 = (char*)malloc(64*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_6, 10*sizeof(char));
}