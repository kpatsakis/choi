void fun()
{
  char* entity_8;
  char* entity_9;
  char entity_2[50] = "";
  entity_2 = NULL;
  entity_8 = (char*)malloc(97*sizeof(char));
  entity_8[97-1]='';
  memset(entity_2, 'f', 50-1);
  entity_2[50-1]='';
  entity_9 = (char*)malloc(63*sizeof(char));
  entity_9[63-1]='';
  entity_2[22] = 'x';
}