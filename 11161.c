void fun()
{
  char* entity_1;
  char entity_9[42] = "";
  char* entity_8;
  entity_1 = (char*)malloc(35*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'M', 42-1);
  entity_9[42-1]='0';
  entity_8 = (char*)malloc(53*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_9, 42*sizeof(char));
}