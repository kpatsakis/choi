void fun()
{
  char* entity_2;
  char entity_1 = 'f';
  char entity_9[73] = "";
  char* entity_6;
  entity_2 = (char*)malloc(54*sizeof(char));
  entity_2[0]='0';
  entity_6 = (char*)malloc(57*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'O', 73-1);
  entity_9[73-1]='0';
  memcpy(entity_6, entity_9, 73*sizeof(char));
}