void fun()
{
  char* entity_9;
  char entity_1[14] = "";
  char* entity_7;
  entity_7 = (char*)malloc(21*sizeof(char));
  entity_7[0]='0';
  entity_9 = (char*)malloc(90*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'g', 14-1);
  entity_1[14-1]='0';
  memcpy(entity_9, entity_1, 14*sizeof(char));
}