void fun()
{
  char entity_9[1] = "";
  char* entity_1;
  char* entity_8;
  entity_1 = (char*)malloc(87*sizeof(char));
  entity_1[0]='0';
  entity_8 = (char*)malloc(17*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'T', 1-1);
  entity_9[1-1]='0';
  memcpy(entity_1, entity_9, 1*sizeof(char));
}