void fun()
{
  int entity_9 = 10;
  char entity_3[59] = "";
  char* entity_5;
  char entity_7[73] = "";
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[0]='0';
  memset(entity_7, 's', 73-1);
  entity_7[73-1]='0';
  memset(entity_3, 'o', 59-1);
  entity_3[59-1]='0';
  memcpy(entity_5, entity_7, 73*sizeof(char));
}