void fun()
{
  char entity_1 = 'A';
  char* entity_3;
  char* entity_9;
  char entity_2[93] = "";
  entity_3 = (char*)malloc(38*sizeof(char));
  entity_3[0]='0';
  memset(entity_2, 'N', 93-1);
  entity_2[93-1]='0';
  entity_9 = (char*)malloc(66*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_2, 93*sizeof(char));
}